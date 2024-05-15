#include "./../s21_decimal.h"

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  int err = dst == NULL;
  if (!err) {
    err = Conditions(src, dst, err);
    if (src != 0) {
      zeroDecimal(dst, 1);
      int sign = s21_get_sign(*dst), scale = s21_get_scale(*dst),
          fexp = read_exp(src);
      if (fexp > 95) {
        err = 1;
      } else {
        if (src < 0) {
          src = -src;
          sign = 1;
        }
        float srct = src;
        float mul = 1.0f;
        for (; !((int)srct); srct *= 10, mul *= 10) scale += 1;
        for (; srct < 10000000 && srct != (int)srct; srct *= 10, mul *= 10)
          scale += 1;
        if (mul != 1.0f && fmodf(src * mul, 10.0f) == 0) {
          mul /= 10;
          scale -= 1;
        }
        if (mul != 1.0f) {
          src *= mul;
        }
        fexp = read_exp(src);
        if (fexp < -94 || scale > 28) {
          err = 1;
        } else {
          uint32_t usrc = ftou(src);
          s21_set_bit(dst, fexp, 1);
          fexp -= 1;
          for (int mask = 0x400000; mask > 0 && fexp >= 0;
               mask >>= 1, fexp -= 1) {
            int bit = !!(mask & usrc);
            s21_set_bit(dst, fexp, bit);
          }
        }
        s21_set_scale(dst, scale);
        s21_set_sign(dst, sign);
      }
    }
  }
  if (err && dst != NULL) {
    zeroDecimal(dst, 1);
  }
  return err;
}

int Conditions(float src, s21_decimal *dst, int err) {
  if (isinf(src) || isnan(src)) {
    err = 1;
    s21_decimal inf = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x7FFFFFFF}};
    *dst = inf;
    if (src <= 0) {
      s21_set_sign(dst, 1);
    }
  } else if (src == 0.0) {
    zeroDecimal(dst, 1);
  }
  return err;
}