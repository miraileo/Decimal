#include "./../s21_decimal.h"

int s21_from_decimal_to_int(s21_decimal src, int* dst) {
  int code = 0;
  if (!dst) {
    code = 1;
  } else {
    *dst = 0;
    int sign = s21_get_sign(src);
    s21_decimal trunc = {{0, 0, 0, 0}};
    s21_truncate(src, &trunc);
    s21_decimal min = {{0x80000000, 0x0, 0x0, 0x80000000}};
    s21_decimal max = {{0x80000000, 0x0, 0x0, 0}};
    if (s21_is_less(trunc, min) == 1) {
      // Если decimal меньше -2147483648 выдаем ошибку
      code = 1;
    } else if (s21_is_greater(trunc, max) == 1) {
      // Если decimal больше 2147483648 выдаем ошибку
      code = 1;
    } else {
      for (int i = 0; i < 32; i++) {
        if (s21_decimal_is_set_bit(trunc, i) != 0) {
          *dst += pow(2, i);
        }
      }
      if (sign == 1 && *dst != -2147483648) {
        *dst = -*dst;
      }
    }
  }
  return code;
}