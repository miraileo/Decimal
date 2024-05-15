#include "./../s21_decimal.h"

int s21_negate(s21_decimal value, s21_decimal* result) {
  int res = 0;
  if (!result) {
    res = 1;
  } else {
    *result = value;
    if (s21_get_sign(value) == 0) {
      s21_set_sign(result, 1);
    } else {
      s21_set_sign(result, 0);
    }
  }
  return res;
}