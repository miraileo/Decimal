#include "../s21_decimal_test.h"

START_TEST(test1) {
  int number = -2147483648;
  // Converted the Int32 value -2147483648 to the Decimal value -2147483648.
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80000000}};

  int res = 0;
  s21_from_decimal_to_int(decimal_check, &res);
  ck_assert_int_eq(number, res);
}

START_TEST(test2) {
  int number = -2147483647;
  // Converted the Int32 value -2147483647 to the Decimal value -2147483647.
  s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x80000000}};

  int res = 0;
  s21_from_decimal_to_int(decimal_check, &res);
  ck_assert_int_eq(number, res);
}

START_TEST(test3) {
  int number = -214748364;
  // Converted the Int32 value -214748364 to the Decimal value -214748364.
  s21_decimal decimal_check = {{0xCCCCCCC, 0x0, 0x0, 0x80000000}};

  int res = 0;
  s21_from_decimal_to_int(decimal_check, &res);
  ck_assert_int_eq(number, res);
}

START_TEST(test4) {
  int number = -214748;
  // Converted the Int32 value -214748 to the Decimal value -214748.
  s21_decimal decimal_check = {{0x346DC, 0x0, 0x0, 0x80000000}};

  int res = 0;
  s21_from_decimal_to_int(decimal_check, &res);
  ck_assert_int_eq(number, res);
}

START_TEST(test5) {
  int number = -1000;
  // Converted the Int32 value -1000 to the Decimal value -1000.
  s21_decimal decimal_check = {{0x3E8, 0x0, 0x0, 0x80000000}};

  int res = 0;
  s21_from_decimal_to_int(decimal_check, &res);
  ck_assert_int_eq(number, res);
}

START_TEST(test6) {
  int number = -1;
  // Converted the Int32 value -1 to the Decimal value -1.
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  int res = 0;
  s21_from_decimal_to_int(decimal_check, &res);
  ck_assert_int_eq(number, res);
}

START_TEST(test7) {
  int number = 0;
  // Converted the Int32 value 0 to the Decimal value 0.
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  int res = 0;
  s21_from_decimal_to_int(decimal_check, &res);
  ck_assert_int_eq(number, res);
}

START_TEST(test8) {
  int number = 1;
  // Converted the Int32 value 1 to the Decimal value 1.
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  int res = 0;
  s21_from_decimal_to_int(decimal_check, &res);
  ck_assert_int_eq(number, res);
}

START_TEST(test9) {
  int number = 1000;
  // Converted the Int32 value 1000 to the Decimal value 1000.
  s21_decimal decimal_check = {{0x3E8, 0x0, 0x0, 0x0}};

  int res = 0;
  s21_from_decimal_to_int(decimal_check, &res);
  ck_assert_int_eq(number, res);
}

START_TEST(test10) {
  int number = 214748;
  // Converted the Int32 value 214748 to the Decimal value 214748.
  s21_decimal decimal_check = {{0x346DC, 0x0, 0x0, 0x0}};

  int res = 0;
  s21_from_decimal_to_int(decimal_check, &res);
  ck_assert_int_eq(number, res);
}

START_TEST(test11) {
  int number = 214748364;
  // Converted the Int32 value 214748364 to the Decimal value 214748364.
  s21_decimal decimal_check = {{0xCCCCCCC, 0x0, 0x0, 0x0}};

  int res = 0;
  s21_from_decimal_to_int(decimal_check, &res);
  ck_assert_int_eq(number, res);
}

START_TEST(test12) {
  int number = 2147483646;
  // Converted the Int32 value 2147483646 to the Decimal value 2147483646.
  s21_decimal decimal_check = {{0x7FFFFFFE, 0x0, 0x0, 0x0}};

  int res = 0;
  s21_from_decimal_to_int(decimal_check, &res);
  ck_assert_int_eq(number, res);
}

START_TEST(test13) {
  int number = 2147483647;
  // Converted the Int32 value 2147483647 to the Decimal value 2147483647.
  s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x0}};

  int res = 0;
  s21_from_decimal_to_int(decimal_check, &res);
  ck_assert_int_eq(number, res);
}

Suite *s21_from_decimal_to_int_test(void) {
  Suite *s = suite_create("\033[42m-=S21_FROM_DECIMAL_TO_INT=-\033[0m");
  TCase *t = tcase_create("main tcase");
  tcase_add_test(t, test1);
  tcase_add_test(t, test2);
  tcase_add_test(t, test3);
  tcase_add_test(t, test4);
  tcase_add_test(t, test5);
  tcase_add_test(t, test6);
  tcase_add_test(t, test7);
  tcase_add_test(t, test8);
  tcase_add_test(t, test9);
  tcase_add_test(t, test10);
  tcase_add_test(t, test11);
  tcase_add_test(t, test12);
  tcase_add_test(t, test13);
  suite_add_tcase(s, t);
  return s;
}
