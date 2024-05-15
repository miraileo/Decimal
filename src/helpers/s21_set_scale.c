#include "../s21_decimal.h"

void s21_set_scale(s21_decimal* num, int scale_value) {
  int sign = 0;
  sign = s21_get_sign(*num);
  num->bits[3] = 0;
  scale_value <<= 16;
  num->bits[3] = scale_value | num->bits[3];
  if (sign) s21_set_sign(num, sign);
}
