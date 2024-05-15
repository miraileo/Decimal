#include "./../s21_decimal.h"
#define TEST_COMPARISON_TRUE 1
#define TEST_COMPARISON_FALSE 0

int s21_is_greater(s21_decimal value_1, s21_decimal value_2) {
  return s21_is_less(value_2, value_1);
}