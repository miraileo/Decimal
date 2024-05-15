#include "./../s21_decimal.h"

int s21_is_less(s21_decimal value_1, s21_decimal value_2) {
  int result = 0;
  long double result1 = 0;
  long double result2 = 0;
  int flag = 1;
  int sign1 = s21_get_sign(value_1);
  int sign2 = s21_get_sign(value_2);
  int exp1 = s21_get_scale(value_1);
  int exp2 = s21_get_scale(value_2);
  long double num1 = 0;
  long double num2 = 0;
  if (zeroDecimal(&value_1, 0) && zeroDecimal(&value_2, 0)) return 0;
  if (!sign1 && sign2) return 0;
  if (sign1 && !sign2) return 1;
  for (int i = 0; i < 4; i++) {
    if (value_1.bits[i] != value_2.bits[i]) {
      flag = 1;
      break;
    } else
      flag = 0;
  }
  if (!flag) return 0;

  int z = 64;
  for (int i = 2; i >= 0; i--) {
    num1 = value_1.bits[i];
    num2 = value_2.bits[i];
    result1 += ((num1 * pow(2, z)) / (pow(10, exp1)));
    result2 += ((num2 * pow(2, z)) / (pow(10, exp2)));
    z -= 32;
  }
  if (result1 >= result2)
    result = 0;
  else
    result = 1;
  if (sign1 && sign2) {
    flag = 1;
    if (result) {
      result = 0;
      flag = 0;
    }
    if (!result && flag) {
      result = 1;
      flag = 0;
    }
  }
  return result;
}