#include "./../s21_decimal.h"

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  int code = 0;
  if (!dst) {
    code = 1;
  } else {
    *dst = s21_get_zero_decimal();
    int sign;
    if (src < 0) {
      sign = 1;
      if (src != -2147483648) {
        src = -src;
      }
    } else {
      sign = 0;
    }
    dst->bits[0] = src;
    s21_set_sign(dst, sign);
  }
  return code;
}