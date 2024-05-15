#include "./../s21_decimal.h"

uint32_t ftou(float num) { return *(uint32_t *)&num; }

int read_exp(float src) {
  int nsrc = *(uint32_t *)&src;

  int mask = 0b11111111u << 23;
  int expo = nsrc & mask;
  expo >>= 23;

  return expo - 127;
}