#include "./../s21_decimal.h"

int s21_round(s21_decimal value, s21_decimal* result) {
  int res = 0;
  if (!result) {
    res = 1;
  } else {
    s21_decimal decim_05 = {{5, 0, 0, 0}};
    s21_decimal one = {{1, 0, 0, 0}};
    s21_set_scale(&decim_05, 1);
    *result = value;
    s21_decimal tr_num = {{0, 0, 0, 0}};
    s21_decimal fractional = {{0, 0, 0, 0}};
    s21_truncate(value, &fractional);
    s21_sub(value, fractional, &tr_num);
    if (s21_get_sign(fractional) == 0) {
      if (s21_is_greater(tr_num, decim_05) ||
          (s21_is_equal(tr_num, decim_05) == 1 &&
           s21_get_bit(fractional, 0) == 1)) {
        s21_add(fractional, one, result);
      } else {
        *result = fractional;
      }
    } else {
      s21_set_sign(&decim_05, 1);
      s21_set_sign(&one, 1);
      if (s21_is_less(tr_num, decim_05) ||
          (s21_is_equal(tr_num, decim_05) == 1 &&
           s21_get_bit(fractional, 0) == 1)) {
        s21_add(fractional, one, result);
      } else {
        *result = fractional;
      }
    }
  }
  return res;
}