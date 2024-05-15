#include "../s21_decimal_test.h"

START_TEST(test_s21_is_less) {
  s21_decimal test_value_1 = {{0, 0, 0, 0}};
  s21_decimal test_value_2 = {{0, 0, 0, 0}};
  s21_from_int_to_decimal(10, &test_value_1);
  s21_from_int_to_decimal(15, &test_value_2);
  ck_assert_int_eq(s21_is_less(test_value_1, test_value_2), 1);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(6739, &test_value_1);
  s21_from_int_to_decimal(19993, &test_value_2);
  ck_assert_int_eq(s21_is_less(test_value_1, test_value_2), 1);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(19993, &test_value_1);
  s21_from_int_to_decimal(6739, &test_value_2);
  ck_assert_int_eq(s21_is_less(test_value_1, test_value_2), 0);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(-19993, &test_value_1);
  s21_from_int_to_decimal(6739, &test_value_2);
  ck_assert_int_eq(s21_is_less(test_value_1, test_value_2), 1);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(19993, &test_value_1);
  s21_from_int_to_decimal(-6739, &test_value_2);
  ck_assert_int_eq(s21_is_less(test_value_1, test_value_2), 0);
}
END_TEST

START_TEST(test_s21_is_less_or_equal) {
  s21_decimal test_value_1 = {{0, 0, 0, 0}};
  s21_decimal test_value_2 = {{0, 0, 0, 0}};
  s21_from_int_to_decimal(111, &test_value_1);
  s21_from_int_to_decimal(111, &test_value_2);
  ck_assert_int_eq(s21_is_less_or_equal(test_value_1, test_value_2), 1);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(711995, &test_value_1);
  s21_from_int_to_decimal(711996, &test_value_2);
  ck_assert_int_eq(s21_is_less_or_equal(test_value_1, test_value_2), 1);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(-19993, &test_value_1);
  s21_from_int_to_decimal(6739, &test_value_2);
  ck_assert_int_eq(s21_is_less_or_equal(test_value_1, test_value_2), 1);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(19993, &test_value_1);
  s21_from_int_to_decimal(-6739, &test_value_2);
  ck_assert_int_eq(s21_is_less_or_equal(test_value_1, test_value_2), 0);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(-9993, &test_value_1);
  s21_from_int_to_decimal(-9993, &test_value_2);
  ck_assert_int_eq(s21_is_less_or_equal(test_value_1, test_value_2), 1);
}
END_TEST

START_TEST(test_s21_is_greater) {
  s21_decimal test_value_1 = {{0, 0, 0, 0}};
  s21_decimal test_value_2 = {{0, 0, 0, 0}};
  s21_from_int_to_decimal(111, &test_value_1);
  s21_from_int_to_decimal(111, &test_value_2);
  ck_assert_int_eq(s21_is_greater(test_value_1, test_value_2), 0);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(19993, &test_value_1);
  s21_from_int_to_decimal(-6739, &test_value_2);
  ck_assert_int_eq(s21_is_greater(test_value_1, test_value_2), 1);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(-19993, &test_value_1);
  s21_from_int_to_decimal(6739, &test_value_2);
  ck_assert_int_eq(s21_is_greater(test_value_1, test_value_2), 0);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(6739, &test_value_1);
  s21_from_int_to_decimal(19993, &test_value_2);
  ck_assert_int_eq(s21_is_greater(test_value_1, test_value_2), 0);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(711996, &test_value_1);
  s21_from_int_to_decimal(711995, &test_value_2);
  ck_assert_int_eq(s21_is_greater(test_value_1, test_value_2), 1);
}
END_TEST

START_TEST(test_s21_is_greater_or_equal) {
  s21_decimal test_value_1 = {{0, 0, 0, 0}};
  s21_decimal test_value_2 = {{0, 0, 0, 0}};
  s21_from_int_to_decimal(11881, &test_value_1);
  s21_from_int_to_decimal(11881, &test_value_2);
  ck_assert_int_eq(s21_is_greater_or_equal(test_value_1, test_value_2), 1);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(711996, &test_value_1);
  s21_from_int_to_decimal(701995, &test_value_2);
  ck_assert_int_eq(s21_is_greater_or_equal(test_value_1, test_value_2), 1);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(0, &test_value_1);
  s21_from_int_to_decimal(0, &test_value_2);
  ck_assert_int_eq(s21_is_greater_or_equal(test_value_1, test_value_2), 1);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(19993, &test_value_1);
  s21_from_int_to_decimal(-6739, &test_value_2);
  ck_assert_int_eq(s21_is_greater_or_equal(test_value_1, test_value_2), 1);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(-19993, &test_value_1);
  s21_from_int_to_decimal(239, &test_value_2);
  ck_assert_int_eq(s21_is_greater_or_equal(test_value_1, test_value_2), 0);
}
END_TEST

START_TEST(test_s21_is_equal) {
  s21_decimal test_value_1 = {{0, 0, 0, 0}};
  s21_decimal test_value_2 = {{0, 0, 0, 0}};
  s21_from_int_to_decimal(0, &test_value_1);
  s21_from_int_to_decimal(0, &test_value_2);
  ck_assert_int_eq(s21_is_equal(test_value_1, test_value_2), 1);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(711996, &test_value_1);
  s21_from_int_to_decimal(701995, &test_value_2);
  ck_assert_int_eq(s21_is_equal(test_value_1, test_value_2), 0);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(19993, &test_value_1);
  s21_from_int_to_decimal(-6739, &test_value_2);
  ck_assert_int_eq(s21_is_equal(test_value_1, test_value_2), 0);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(-9993, &test_value_1);
  s21_from_int_to_decimal(-9993, &test_value_2);
  ck_assert_int_eq(s21_is_equal(test_value_1, test_value_2), 1);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(11881, &test_value_1);
  s21_from_int_to_decimal(11881, &test_value_2);
  ck_assert_int_eq(s21_is_greater_or_equal(test_value_1, test_value_2), 1);
}
END_TEST

START_TEST(test_s21_is_not_equal) {
  s21_decimal test_value_1 = {{0, 0, 0, 0}};
  s21_decimal test_value_2 = {{0, 0, 0, 0}};
  s21_from_int_to_decimal(-9993, &test_value_1);
  s21_from_int_to_decimal(-9993, &test_value_2);
  ck_assert_int_eq(s21_is_not_equal(test_value_1, test_value_2), 0);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(19993, &test_value_1);
  s21_from_int_to_decimal(-6739, &test_value_2);
  ck_assert_int_eq(s21_is_not_equal(test_value_1, test_value_2), 1);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(711996, &test_value_1);
  s21_from_int_to_decimal(701995, &test_value_2);
  ck_assert_int_eq(s21_is_not_equal(test_value_1, test_value_2), 1);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(11881, &test_value_1);
  s21_from_int_to_decimal(11881, &test_value_2);
  ck_assert_int_eq(s21_is_not_equal(test_value_1, test_value_2), 0);

  test_value_1.bits[3] = 0;
  test_value_2.bits[3] = 0;
  s21_from_int_to_decimal(6739, &test_value_1);
  s21_from_int_to_decimal(19993, &test_value_2);
  ck_assert_int_eq(s21_is_not_equal(test_value_1, test_value_2), 1);
}
END_TEST

Suite *s21_comparasion_test(void) {
  Suite *s = suite_create("\033[42m-=S21_COMPARASIONS=-\033[0m");
  TCase *tc = tcase_create("s21_comparasion");

  tcase_add_test(tc, test_s21_is_less);
  tcase_add_test(tc, test_s21_is_less_or_equal);
  tcase_add_test(tc, test_s21_is_greater);
  tcase_add_test(tc, test_s21_is_greater_or_equal);
  tcase_add_test(tc, test_s21_is_equal);
  tcase_add_test(tc, test_s21_is_not_equal);

  suite_add_tcase(s, tc);
  return s;
}