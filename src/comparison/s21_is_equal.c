#include "./../s21_decimal.h"

int s21_is_equal(s21_decimal value_1, s21_decimal value_2) {
  for (int i = 0; i < 4; i++) {
    if (value_1.bits[i] != value_2.bits[i]) {
      return 0;
    }
  }
  return s21_get_sign(value_1) == s21_get_sign(value_2);
}
