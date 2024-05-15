#include "./../s21_decimal.h"

int s21_floor(s21_decimal value, s21_decimal* result) {
  int res = 0;
  if (!result) {
    res = 1;
  } else {
    s21_decimal one = {{1, 0, 0, 0}};
    zeroDecimal(result, 1);
    s21_truncate(value, result);
    if (s21_get_sign(value) == 1 && s21_is_equal(*result, value) == 0) {
      s21_sub(*result, one, result);
    }
  }
  return res;
}