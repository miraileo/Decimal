#include "./../s21_decimal.h"

void s21_truncate_decim(s21_decimal* decim, int scale) {
  unsigned long u_num;
  int tmp_int = 0;
  for (int i = 0; i < scale; i++) {
    u_num = decim->bits[2];
    int j = 2;
    for (; j >= 0; j--) {
      if (j == 0) {
        decim->bits[j] = u_num / 10;
      } else {
        tmp_int = u_num % 10;
        decim->bits[j] = u_num / 10;
        u_num = tmp_int * (4294967296) + decim->bits[j - 1];
      }
    }
  }
  decim->bits[3] = 0;
}

int s21_truncate(s21_decimal value, s21_decimal* result) {
  int res = 0;
  if (result == NULL) {
    res = 1;
  } else if (s21_get_scale(value) == 0) {
    *result = value;
  } else {
    int res_sing = 0;
    if (s21_get_sign(value) == 1) {
      s21_negate(value, &value);
      res_sing = 1;
    }
    int scale = s21_get_scale(value);
    s21_truncate_decim(&value, scale);
    s21_set_scale(&value, 0);
    *result = value;
    if (res_sing == 1) {
      s21_negate(*result, result);
    }
  }
  return res;
}