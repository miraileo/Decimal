#include "./../s21_decimal.h"
int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int error = 0;
  if (result != NULL) {
    zeroDecimal(result, 1);
    if (s21_get_sign(value_1) && !s21_get_sign(value_2)) {
      error = add_both_different_sign(value_1, value_2, result);
    }
    if (!s21_get_sign(value_1) && s21_get_sign(value_2)) {
      error = add_both_different_sign(value_1, value_2, result);
    }
    if (!s21_get_sign(value_1) && !s21_get_sign(value_2)) {
      error = add_both_same_sign(value_1, value_2, result);
    }
    if (s21_get_sign(value_1) && s21_get_sign(value_2)) {
      error = add_both_same_sign(value_1, value_2, result);
    }
  }
  return error;
}

int add_both_same_sign(s21_decimal value_1, s21_decimal value_2,
                       s21_decimal *result) {
  int error = 0;
  int memo = 0;
  int sign = 1;
  int exp1 = s21_get_scale(value_1);
  int exp2 = s21_get_scale(value_2);
  if (s21_get_sign(value_1)) sign = -1;
  for (int i = 0; i <= 2; i++) {
    if (exp1 > exp2)
      value_2.bits[i] *= pow(10, exp1 - exp2);
    else
      value_1.bits[i] *= pow(10, exp2 - exp1);
    result->bits[i] = value_1.bits[i] + value_2.bits[i] + memo;
    if (result->bits[i] < value_1.bits[i] ||
        result->bits[i] < value_2.bits[i]) {
      memo = 1 * sign;
      if (i == 2) error = 1;
    } else
      memo = 0;
    s21_set_scale(result, exp1);
  }
  exp1 >= exp2 ? s21_set_scale(result, exp1) : s21_set_scale(result, exp2);
  if (sign == -1) {
    s21_set_sign(result, 1);
    if (error) error = 2;
  }
  return error;
}

int add_both_different_sign(s21_decimal value_1, s21_decimal value_2,
                            s21_decimal *result) {
  int sign = 0;
  int exp1 = s21_get_scale(value_1);
  int exp2 = s21_get_scale(value_2);
  for (int i = 0; i <= 2; i++) {
    if (exp1 > exp2)
      value_2.bits[i] *= pow(10, exp1 - exp2);
    else
      value_1.bits[i] *= pow(10, exp2 - exp1);
    if (value_1.bits[i] >= value_2.bits[i]) {
      result->bits[i] = value_1.bits[i] - value_2.bits[i];
      if (s21_get_sign(value_1)) sign = 1;
    } else {
      result->bits[i] = value_2.bits[i] - value_1.bits[i];
      if (s21_get_sign(value_2)) sign = 1;
    }
    s21_set_scale(result, exp1);
  }
  exp1 >= exp2 ? s21_set_scale(result, exp1) : s21_set_scale(result, exp2);
  if (sign) s21_set_sign(result, 1);
  if (zeroDecimal(result, 0)) zeroDecimal(result, 1);
  return 0;
}