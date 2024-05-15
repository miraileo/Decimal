#ifndef S21_DECIMAL_TEST_H
#define S21_DECIMAL_TEST_H

#include <check.h>
#include <limits.h>
#include <stdio.h>
#include <wchar.h>

#include "../s21_decimal.h"

typedef union float_cast_test {
  float f;
  struct {
    uint32_t mantisa : 23;
    uint32_t exponent : 8;
    uint32_t sign : 1;
  } parts;
  uint32_t bytes;
  int int32_bytes;
} float_cast_test;

#define TEST_COMPARISON_FALSE 0
#define TEST_COMPARISON_TRUE 1

int run_testcase(Suite *testcase);
void run_tests(void);

Suite *s21_from_int_to_decimal_test(void);
Suite *s21_from_decimal_to_int_test(void);
Suite *s21_from_decimal_to_float_test(void);
Suite *s21_from_float_to_decimal_test(void);

Suite *s21_sub_test(void);
Suite *s21_mul_test(void);
Suite *s21_div_test(void);
Suite *s21_add_test(void);

Suite *s21_floor_test(void);
Suite *s21_negate_test(void);
Suite *s21_round_test(void);
Suite *s21_round_test_2(void);
Suite *s21_truncate_test(void);
Suite *s21_truncate_test_2(void);

Suite *s21_is_equal_test(void);
Suite *s21_is_less_test(void);
Suite *s21_comparasion_test(void);

#endif
