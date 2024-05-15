#include "../s21_decimal.h"

int s21_decimal_is_set_bit(s21_decimal decimal, int index) {
  return s21_is_set_bit(decimal.bits[index / 32], index % 32);
}