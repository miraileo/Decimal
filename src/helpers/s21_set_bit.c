#include "../s21_decimal.h"

void s21_set_bit(s21_decimal* decl, int index, int bit) {
  int index_bit = index % 32;
  int index_int = index / 32;
  if (bit == 1) {
    decl->bits[index_int] |= (1u << index_bit);
  }
  if (bit == 0) {
    decl->bits[index_int] &= (~((1u) << index_bit));
  }
  return;
}
