#include "../s21_decimal.h"

void s21_set_sign(s21_decimal* num, int sign_value) {
  if (sign_value == 1) {
    num->bits[3] |= (1u << 31);
  }
  if (sign_value == 0) {
    num->bits[3] &= (~((1u) << 31));
  }
  return;
}
