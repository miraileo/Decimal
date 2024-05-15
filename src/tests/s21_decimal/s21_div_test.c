#include "../s21_decimal_test.h"

START_TEST(test_s21_div_1) {
  s21_decimal src1 = {{25, 0, 0, 0}};
  s21_decimal src2 = {{5, 0, 0, 0}};
  s21_decimal result = {{0, 0, 0, 0}};
  s21_div(src1, src2, &result);
  ck_assert_int_eq(result.bits[0], 5);
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);
}
END_TEST

START_TEST(test_s21_div_2) {
  s21_decimal src1 = {{25, 0, 0, 0}};
  s21_decimal src2 = {{0, 0, 0, 0}};
  s21_decimal result = {{0, 0, 0, 0}};
  int res = s21_div(src1, src2, &result);
  ck_assert_int_eq(res, 3);
}
END_TEST

START_TEST(test_s21_div_3) {
  s21_decimal src1 = {{0, 1, 0, 0}};
  s21_decimal src2 = {{2, 0, 0, 0}};
  s21_decimal result = {{0, 0, 0, 0}};
  s21_div(src1, src2, &result);
  ck_assert_int_eq(result.bits[0], 2147483648);
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);
}
END_TEST

START_TEST(test_s21_div_4) {
  s21_decimal src1 = {{1000, 0, 0, 65536}};  // 65536
  s21_decimal src2 = {{2, 0, 0, 0}};
  s21_decimal result = {{0, 0, 0, 0}};
  s21_div(src1, src2, &result);
  ck_assert_int_eq(result.bits[0], 50);
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);
}
END_TEST

START_TEST(test_s21_div_5) {
  s21_decimal src1 = {{1000, 0, 0, 0}};
  s21_decimal src2 = {{5, 0, 0, 65536}};
  s21_decimal result = {{0, 0, 0, 0}};
  s21_div(src1, src2, &result);
  ck_assert_int_eq(result.bits[0], 2000);
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);
}
END_TEST

START_TEST(test_s21_div_6) {
  s21_decimal src1 = {{1000, 0, 0, 131072}};
  s21_decimal src2 = {{50, 0, 0, 65536}};
  s21_decimal result = {{0, 0, 0, 0}};
  s21_div(src1, src2, &result);
  ck_assert_int_eq(result.bits[0], 2);
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);
}
END_TEST

START_TEST(test_s21_div_7) {
  s21_decimal src1 = {{MAX_INT, MAX_INT, MAX_INT, 0}};
  s21_decimal src2 = {{5, 0, 0, 65536}};  // 0,5
  s21_decimal result = {{0, 0, 0, 0}};
  int err = s21_div(src1, src2, &result);
  ck_assert_int_eq(err, 1);
}
END_TEST

START_TEST(test_s21_div_8) {
  s21_decimal src1 = {{0, 12, MAX_INT, 0}};
  s21_decimal src2 = {{5, 0, 0, 65536}};  // 0,5
  s21_decimal result = {{0, 0, 0, 0}};
  int err = s21_div(src1, src2, &result);
  ck_assert_int_eq(err, 1);
}
END_TEST

Suite *s21_div_test(void) {
  Suite *s = suite_create("\033[42m-=S21_DIV=-\033[0m");
  TCase *tc = tcase_create("div_tc");
  tcase_add_test(tc, test_s21_div_1);
  tcase_add_test(tc, test_s21_div_2);
  tcase_add_test(tc, test_s21_div_3);
  tcase_add_test(tc, test_s21_div_4);
  tcase_add_test(tc, test_s21_div_5);
  tcase_add_test(tc, test_s21_div_6);
  tcase_add_test(tc, test_s21_div_7);
  tcase_add_test(tc, test_s21_div_8);
  suite_add_tcase(s, tc);
  return s;
}