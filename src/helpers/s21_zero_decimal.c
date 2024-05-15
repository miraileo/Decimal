#include "../s21_decimal.h"

int zeroDecimal(s21_decimal *value, int command) {
  int result = 0;
  if (command == 0) {
    if (value->bits[0] == 0 && value->bits[1] == 0 && value->bits[2] == 0)
      result = 1;
  } else {
    value->bits[0] = 0;
    value->bits[1] = 0;
    value->bits[2] = 0;
    value->bits[3] = 0;
  }
  return result;
}