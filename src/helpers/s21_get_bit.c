#include "../s21_decimal.h"

int s21_get_bit(s21_decimal num, int bit) {
  int index_bit = bit % 32;
  int index_int = bit / 32;

  return (num.bits[index_int] >> index_bit) & 1;
}
