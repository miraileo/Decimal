#include "./../s21_decimal.h"
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int memo = 0;
  int error = 0;
  int sign1 = s21_get_sign(value_1);
  int sign2 = s21_get_sign(value_2);
  if (result != NULL) {
    if (Overflow(value_1, value_2)) error = 1;
    for (int i = 0; i < 3; i++) {
      memo = mulByAdd(value_1, value_2, i, 0);
      result->bits[i] += (value_1.bits[0] * value_2.bits[i]);
      result->bits[i + 1] += memo;
    }
    for (int i = 0; i < 2; i++) {
      memo = mulByAdd(value_1, value_2, i, 1);
      if (((MAX_INT - result->bits[i + 1]) <
           value_1.bits[1] * value_2.bits[i]) &&
          !memo && i != 1)
        result->bits[i + 2] += 1;
      result->bits[i + 1] += (value_1.bits[1] * value_2.bits[i]);
      if (MAX_INT - result->bits[i + 1] < memo) result->bits[i + 2] += 1;
      result->bits[i + 1] += memo;
    }
    if (mulByAdd(value_1, value_2, 0, 2) != 0) error = 1;
    result->bits[2] += (value_1.bits[2] * value_2.bits[0]);
    s21_set_scale(result, s21_get_scale(value_1) + s21_get_scale(value_2));
    if ((!sign1 && sign2) || (sign1 && !sign2)) {
      s21_set_sign(result, 1);
      if (error) error = 2;
    }
    if (zeroDecimal(result, 0)) zeroDecimal(result, 1);
  }
  return error;
}

int Overflow(s21_decimal val1, s21_decimal val2) {
  int flag = 0;
  if ((val1.bits[2] > 0 && val2.bits[1] > 0) ||
      (val2.bits[2] > 0 && val2.bits[1] > 0) ||
      (val1.bits[2] > 0 && val2.bits[2] > 0))
    flag = 1;
  if ((val1.bits[1] == MAX_INT && val2.bits[1] != 0) &&
      (val1.bits[0] != 0 || val2.bits[0] != 0))
    flag = 1;
  if ((val1.bits[1] != 0 && val2.bits[1] == MAX_INT) &&
      (val1.bits[0] != 0 || val2.bits[0] != 0))
    flag = 1;
  else if (val1.bits[1] > 0 && val2.bits[1] > 0) {
    unsigned int count = val1.bits[1];
    unsigned int result = 0;
    if (val1.bits[1] > val2.bits[1]) count = val2.bits[1];
    for (unsigned int i = 0; i < count; i++) {
      if (count == val1.bits[1])
        result += val2.bits[1];
      else
        result += val1.bits[1];
      if (result < val1.bits[1] || result < val2.bits[1]) {
        flag = 1;
        break;
      }
    }
  }
  return flag;
}

int mulByAdd(s21_decimal value_1, s21_decimal value_2, int i, int bitNumber) {
  unsigned int memo = 0;
  unsigned int res = 0;
  unsigned int smallNum = value_2.bits[i];
  unsigned int bigNum = value_1.bits[bitNumber];
  int flag = 0;
  if (value_1.bits[bitNumber] > value_2.bits[i]) {
    smallNum = value_2.bits[i];
    bigNum = value_1.bits[bitNumber];
  }
  if (value_1.bits[bitNumber] < value_2.bits[i]) {
    smallNum = value_1.bits[bitNumber];
    bigNum = value_2.bits[i];
  }
  if (!flag) {
    for (unsigned int j = 0; j < smallNum; j++) {
      res += bigNum;
      if (res < bigNum || res < smallNum) {
        memo++;
      }
    }
  }
  return memo;
}