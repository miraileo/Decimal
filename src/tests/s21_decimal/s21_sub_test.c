#include "../s21_decimal_test.h"

START_TEST(sub_0) {
  s21_decimal val1 = {{2, 0, 0, ~(MAX_INT / 2)}};
  s21_decimal val2 = {{2, 0, 0, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_1) {
  s21_decimal val1 = {{2, 0, 0, 0}};
  s21_decimal val2 = {{2, 0, 0, ~(MAX_INT / 2)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_2) {
  s21_decimal val1 = {{2, 0, 0, ~(MAX_INT / 2)}};
  s21_decimal val2 = {{2, 0, 0, ~(MAX_INT / 2)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_3) {
  s21_decimal val1 = {{2, 0, 0, 0}};
  s21_decimal val2 = {{2, 0, 0, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_4) {
  s21_decimal val1 = {{8, 0, 0, 0}};
  s21_decimal val2 = {{2, 0, 0, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_5) {
  s21_decimal val1 = {{2, 0, 0, 0}};
  s21_decimal val2 = {{8, 0, 0, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_6) {
  s21_decimal val1 = {{8, 0, 0, ~(MAX_INT / 2)}};
  s21_decimal val2 = {{2, 0, 0, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_7) {
  s21_decimal val1 = {{2, 0, 0, ~(MAX_INT / 2)}};
  s21_decimal val2 = {{8, 0, 0, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_8) {
  s21_decimal val1 = {{2, 0, 0, 0}};
  s21_decimal val2 = {{8, 0, 0, ~(MAX_INT / 2)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_9) {
  s21_decimal val1 = {{8, 0, 0, 0}};
  s21_decimal val2 = {{2, 0, 0, ~(MAX_INT / 2)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_10) {
  s21_decimal val1 = {{8, 0, 0, ~(MAX_INT / 2)}};
  s21_decimal val2 = {{0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_11) {
  s21_decimal val1 = {{MAX_INT, MAX_INT, MAX_INT, ~(MAX_INT / 2)}};
  s21_decimal val2 = {{4, 0, 0, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(2, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_12) {
  s21_decimal val1 = {{MAX_INT, MAX_INT, MAX_INT, 0}};
  s21_decimal val2 = {{4, 0, 0, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_13) {
  s21_decimal val1 = {{MAX_INT, MAX_INT, MAX_INT, ~(MAX_INT / 2)}};
  s21_decimal val2 = {{4, 0, 0, ~(MAX_INT / 2)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_14) {
  s21_decimal val1 = {{4, 0, 0, ~(MAX_INT / 2)}};
  s21_decimal val2 = {{MAX_INT, MAX_INT, MAX_INT, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(2, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_15) {
  s21_decimal val1 = {{4, 0, 0, 0}};
  s21_decimal val2 = {{MAX_INT, MAX_INT, MAX_INT, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_16) {
  s21_decimal val1 = {{4, 0, 0, ~(MAX_INT / 2)}};
  s21_decimal val2 = {{MAX_INT, MAX_INT, MAX_INT, ~(MAX_INT / 2)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_17) {
  s21_decimal val1 = {{MAX_INT, MAX_INT, MAX_INT, 0}};
  s21_decimal val2 = {{4, 0, 0, ~(MAX_INT / 2)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(1, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_18) {
  s21_decimal val1 = {{4, 0, 0, 0}};
  s21_decimal val2 = {{MAX_INT, MAX_INT, MAX_INT, ~(MAX_INT / 2)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(1, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_19) {
  s21_decimal val1 = {{4, 0, 0, 0}};
  s21_decimal val2 = {{4, 0, 0, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_sub(val1, val2, &res));
}
END_TEST

START_TEST(sub_20) {
  s21_decimal dec1 = {{0}};
  s21_decimal dec2 = {{0}};
  int tmp1 = 100;
  int tmp2 = 99999;
  int res_s21 = 0;
  int res = -99899;
  s21_decimal res1 = {{0}};
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_sub(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(sub_21) {
  s21_decimal dec1 = {{0}};
  s21_decimal dec2 = {{0}};
  int tmp1 = -100;
  int tmp2 = -99999;
  int res_s21 = 0;
  s21_decimal res1 = {{0}};
  int res = 99899;
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_sub(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(sub_22) {
  s21_decimal value_1 = {{13, 0, 0, 0}};
  s21_set_scale(&value_1, 1);
  s21_set_sign(&value_1, 1);
  s21_decimal value_2 = {{286, 0, 0, 0}};
  s21_set_scale(&value_2, 2);
  s21_set_sign(&value_2, 1);
  s21_decimal result = {0};
  s21_decimal check = {{156, 0, 0, 0}};
  s21_set_scale(&check, 2);
  int return_value = s21_sub(value_1, value_2, &result);
  ck_assert_int_eq(result.bits[0], check.bits[0]);
  ck_assert_int_eq(result.bits[1], check.bits[1]);
  ck_assert_int_eq(result.bits[2], check.bits[2]);
  ck_assert_int_eq(result.bits[3], check.bits[3]);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(sub_23) {
  s21_decimal value_1 = {{13, 0, 0, 0}};
  s21_set_scale(&value_1, 1);
  s21_set_sign(&value_1, 1);
  s21_decimal value_2 = {{286, 0, 0, 0}};
  s21_set_scale(&value_2, 2);
  s21_decimal result = {0};
  s21_decimal check = {{416, 0, 0, 0}};
  s21_set_scale(&check, 2);
  s21_set_sign(&check, 1);
  int return_value = s21_sub(value_1, value_2, &result);
  ck_assert_int_eq(result.bits[0], check.bits[0]);
  ck_assert_int_eq(result.bits[1], check.bits[1]);
  ck_assert_int_eq(result.bits[2], check.bits[2]);
  ck_assert_int_eq(result.bits[3], check.bits[3]);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(sub_24) {
  s21_decimal value_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
  s21_set_sign(&value_1, 1);
  s21_decimal value_2 = {{2, 0, 0, 0}};
  s21_decimal result = {0};
  int return_value = s21_sub(value_1, value_2, &result);
  ck_assert_int_eq(return_value, 2);
}
END_TEST

START_TEST(sub_25) {
  s21_decimal value_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
  s21_set_sign(&value_1, 1);
  s21_decimal value_2 = {{2, 0, 0, 0}};
  s21_set_sign(&value_2, 1);
  s21_decimal result = {0};
  int return_value = s21_add(value_1, value_2, &result);
  ck_assert_int_eq(return_value, 2);
}
END_TEST

START_TEST(sub_26) {
  s21_decimal value_1 = {{64071, 0, 0, 0}};
  s21_set_scale(&value_1, 4);
  s21_decimal value_2 = {{5919, 0, 0, 0}};
  s21_set_scale(&value_2, 1);
  s21_decimal result = {0};
  s21_decimal check = {{5854929, 0, 0, 0}};
  s21_set_scale(&check, 4);
  s21_set_sign(&check, 1);
  int return_value = s21_sub(value_1, value_2, &result);
  ck_assert_int_eq(result.bits[0], check.bits[0]);
  ck_assert_int_eq(result.bits[1], check.bits[1]);
  ck_assert_int_eq(result.bits[2], check.bits[2]);
  ck_assert_int_eq(result.bits[3], check.bits[3]);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(sub_27) {
  s21_decimal src1 = {0}, src2 = {0};
  float a = -9403;
  float b = 202.098;
  float res_our_dec = 0.0;
  s21_from_float_to_decimal(a, &src1);
  s21_from_float_to_decimal(b, &src2);
  float res_origin = a - b;
  s21_decimal res_od = {0};
  s21_sub(src1, src2, &res_od);
  s21_from_decimal_to_float(res_od, &res_our_dec);
  ck_assert_float_eq(res_our_dec, res_origin);
}
END_TEST

START_TEST(sub_28) {
  s21_decimal src1 = {0}, src2 = {0};
  src1.bits[3] = 0b00000000000000010000000000000000;
  src1.bits[2] = 0;
  src1.bits[1] = 0;
  src1.bits[0] = 0b00000000000000000110011011110000;
  src2.bits[3] = 0b00000000000000110000000000000000;
  src2.bits[2] = 0;
  src2.bits[1] = 0;
  src2.bits[0] = 0b00000000000001000101000111010110;
  s21_decimal result_origin = {0};
  result_origin.bits[3] = 0b00000000000000110000000000000000;
  result_origin.bits[2] = 0;
  result_origin.bits[1] = 0;
  result_origin.bits[0] = 0b00000000001000111110001111101010;
  s21_decimal result_our = {0};
  s21_sub(src1, src2, &result_our);
  ck_assert_int_eq(result_origin.bits[3], result_our.bits[3]);
  ck_assert_int_eq(result_origin.bits[2], result_our.bits[2]);
  ck_assert_int_eq(result_origin.bits[1], result_our.bits[1]);
  ck_assert_int_eq(result_origin.bits[0], result_our.bits[0]);
}
END_TEST

START_TEST(s21_subTest1) {
  // 863
  s21_decimal src1, src2, origin;
  // src1 = 2;
  // src2 = 3;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest2) {
  // 889
  s21_decimal src1, src2, origin;
  // src1 = 3;
  // src2 = 2;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000010;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest3) {
  // 915
  s21_decimal src1, src2, origin;
  // src1 = 0;
  // src2 = 3;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest4) {
  // 941
  s21_decimal src1, src2, origin;
  // src1 = 2;
  // src2 = 0;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest5) {
  // 967
  s21_decimal src1, src2, origin;
  // src1 = 0;
  // src2 = 3;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest6) {
  // 993
  s21_decimal src1, src2, origin;
  // src1 = 2;
  // src2 = 0;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest7) {
  // 1019
  s21_decimal src1, src2, origin;
  // src1 = 6521;
  // src2 = 74121;

  src1.bits[0] = 0b00000000000000000001100101111001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000010010000110001001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000010000100000010000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest8) {
  // 1045
  s21_decimal src1, src2, origin;
  // src1 = 4;
  // src2 = 97623323;

  src1.bits[0] = 0b00000000000000000000000000000100;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000101110100011001110100011011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000101110100011001110100010111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest9) {
  // 1071
  s21_decimal src1, src2, origin;
  // src1 = 65658654;
  // src2 = 5;

  src1.bits[0] = 100;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 95;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 5;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest10) {
  // 1097
  s21_decimal src1, src2, origin;
  // src1 = -364748;
  // src2 = 1;

  src1.bits[0] = 0b00000000000001011001000011001100;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000001011001000011001101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest11) {
  // 1123
  s21_decimal src1, src2, origin;
  // src1 = 1;
  // src2 = 98745654321;

  src1.bits[0] = 0b00000000000000000000000000000001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b11111101101100110001110000110001;
  src2.bits[1] = 0b00000000000000000000000000010110;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b11111101101100110001110000110000;
  origin.bits[1] = 0b00000000000000000000000000010110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest12) {
  // 1149
  s21_decimal src1, src2, origin;
  // src1 = -9878798789;
  // src2 = -3;

  src1.bits[0] = 0b01001100110100101000000111000101;
  src1.bits[1] = 0b00000000000000000000000000000010;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b01001100110100101000000111000010;
  origin.bits[1] = 0b00000000000000000000000000000010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest13) {
  // 1175
  s21_decimal src1, src2, origin;
  // src1 = 9999999999999999999;
  // src2 = 1;

  src1.bits[0] = 0b10001001111001111111111111111111;
  src1.bits[1] = 0b10001010110001110010001100000100;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b10001001111001111111111111111110;
  origin.bits[1] = 0b10001010110001110010001100000100;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest14) {
  // 1201
  s21_decimal src1, src2, origin;
  // src1 = 18446744073709551615;
  // src2 = 1;

  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b11111111111111111111111111111110;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest15) {
  // 1227
  s21_decimal src1, src2, origin;
  // src1 = 18446744073709551615.0;
  // src2 = 965453154;

  src1.bits[0] = 0b11111111111111111111111111110110;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b00000000000000000000000000001001;
  src1.bits[3] = 0b00000000000000010000000000000000;

  src2.bits[0] = 0b00111001100010111010010101100010;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b11000000100010111000101000100010;
  origin.bits[1] = 4294967295;
  origin.bits[2] = 0b00000000000000000000000000001001;
  origin.bits[3] = 0b00000000000000010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest18) {
  // 1305
  s21_decimal src1, src2, origin;
  // src1 = 7961327845421.879754123131254;
  // src2 = 0;

  src1.bits[0] = 0b01001110111001000011100101110110;
  src1.bits[1] = 0b01001011001101011010000111011001;
  src1.bits[2] = 0b00011001101110010111010010111111;
  src1.bits[3] = 0b00000000000011110000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b01001110111001000011100101110110;
  origin.bits[1] = 0b01001011001101011010000111011001;
  origin.bits[2] = 0b00011001101110010111010010111111;
  origin.bits[3] = 0b00000000000011110000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest23) {
  // 1435
  s21_decimal src1, src2, origin;
  // src1 = 0;
  // src2 = 0;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest24) {
  // 1461
  s21_decimal src1, src2, origin;
  // src1 = 0;
  // src2 = 0;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest25) {
  // 1487
  s21_decimal src1, src2, origin;
  // src1 = 0;
  // src2 = 0;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest26) {
  // 1513
  s21_decimal src1, src2, origin;
  // src1 = 792281625142643375935439503;
  // src2 = -1;

  src1.bits[0] = 0b00101000111101011100001010001111;
  src1.bits[1] = 0b11110101110000101000111101011100;
  src1.bits[2] = 0b00000010100011110101110000101000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00101000111101011100001010010000;
  origin.bits[1] = 0b11110101110000101000111101011100;
  origin.bits[2] = 0b00000010100011110101110000101000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest27) {
  // 1539
  s21_decimal src1, src2, origin;
  // src1 = 7922816251427554395;
  // src2 = 65645646;

  src1.bits[0] = 0b01011111000010000000010001011011;
  src1.bits[1] = 0b01101101111100110111111101100111;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000011111010011010110001001110;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b01011011000111100101100000001101;
  origin.bits[1] = 0b01101101111100110111111101100111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest28) {
  // 1565
  s21_decimal src1, src2, origin;
  // src1 = 665464545;
  // src2 = 8798232189789785;
  // res = -8798 231 524 325 240
  src1.bits[0] = 0b00100111101010100010111011100001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00010000010100101110011001011001;
  src2.bits[1] = 0b00000000000111110100000111110010;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b11101000101010001011011101111000;
  origin.bits[1] = 2048497;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_set_sign(&origin, 1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_subTest33) {
  // 1695
  s21_decimal src1, src2, origin;
  // src1 = -7922816251426433759354395033;
  // src2 = 1;

  src1.bits[0] = 0b10011001100110011001100110011001;
  src1.bits[1] = 0b10011001100110011001100110011001;
  src1.bits[2] = 0b00011001100110011001100110011001;
  src1.bits[3] = 0b10000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b10011001100110011001100110011010;
  origin.bits[1] = 0b10011001100110011001100110011001;
  origin.bits[2] = 0b00011001100110011001100110011001;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_test_decimal_sub_simple_0) {  // 10 -5 =5
  s21_decimal c = {{10, 0, 0, 0}};
  s21_decimal d = {{5, 0, 0, 0}};
  s21_decimal etalon = {{5, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal* p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[0], etalon.bits[0]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[3], etalon.bits[3]);
}
END_TEST

START_TEST(s21_test_decimal_sub_simple_1) {  // 100 -5 !=5
  s21_decimal c = {{100, 0, 0, 0}};
  s21_decimal d = {{5, 0, 0, 0}};
  s21_decimal etalon = {{95, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal* p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[0], etalon.bits[0]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[3], etalon.bits[3]);
}
END_TEST

START_TEST(s21_test_decimal_sub_simple_2) {  // INT_MAX -5 = 2147483642
  s21_decimal c = {{INT_MAX, 0, 0, 0}};
  s21_decimal d = {{5, 0, 0, 0}};
  s21_decimal etalon = {{2147483642, 0, 0, 0}};
  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal* p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[0], etalon.bits[0]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[3],
                   etalon.bits[3]);  // Возвращаемое значение: 0 - 0 1 - 1
}
END_TEST

START_TEST(s21_test_decimal_sub_simple_3) {  // роботает только с ппервым
                                             // массивом - ложный результат
  s21_decimal c = {{INT_MAX, INT_MAX, 0, 0}};
  s21_decimal d = {{5, 0, 0, 0}};
  s21_decimal etalon = {{INT_MAX - 5, INT_MAX, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal* p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[0], etalon.bits[0]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[3],
                   etalon.bits[3]);  // Возвращаемое значение: 0 - 0 1 - 1
}

START_TEST(s21_test_decimal_sub_simple_7) {  // 1-(-1)=2
  s21_decimal c = {{1, 0, 0, 0}};
  s21_decimal d = {{1, 0, 0, ~(INT_MAX)}};
  s21_decimal etalon = {{2, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal* p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[0], etalon.bits[0]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[3],
                   etalon.bits[3]);  // Возвращаемое значение: 0 - 0 1 - 1
}
END_TEST

START_TEST(s21_test_decimal_sub_simple_8) {  // -1-(-1)=0
  s21_decimal c = {{1, 0, 0, ~(INT_MAX)}};
  s21_decimal d = {{1, 0, 0, ~(INT_MAX)}};
  s21_decimal etalon = {{0, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal* p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[0], etalon.bits[0]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[3],
                   etalon.bits[3]);  // Возвращаемое значение: 0 - 0 1 - 1
}
END_TEST

START_TEST(s21_test_decimal_sub_simple_10) {  // 1-(-1)=2
  s21_decimal c = {{100, 0, 0, 0}};
  s21_decimal d = {{100, 0, 0, ~(INT_MAX)}};
  s21_decimal etalon = {{200, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal* p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[0], etalon.bits[0]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[3],
                   etalon.bits[3]);  // Возвращаемое значение: 0 - 0 1 - 1
}
END_TEST

START_TEST(s21_test_decimal_sub_simple_11) {  // -1-(-1)=0
  s21_decimal c = {{100, 0, 0, ~(INT_MAX)}};
  s21_decimal d = {{100, 0, 0, ~(INT_MAX)}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal* p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);
}
END_TEST

START_TEST(sub_test_11) {
  int num1 = 123;
  float num2 = 12.5;
  float origin_float = 110.5;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_float_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, origin_float);
}
END_TEST

START_TEST(sub_test_12) {
  int num1 = -123;
  float num2 = 12.5;
  float dif_float = num1 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_float_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(sub_test_14) {
  int num1 = 9403;
  float num2 = 202.098;
  float dif_float = 9200.902;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_float_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(sub_test_15) {
  int num1 = -9403;
  float num2 = 202.098;
  float dif_float = num1 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_float_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(sub_test_16) {
  float num1 = 9403.0;
  float num2 = 202.09e8;
  float dif_float = num1 - num2;
  s21_decimal a = {{9403, 0, 0, 0}};
  s21_decimal b = {{3029130820, 4, 0, 0}};
  // s21_from_float_to_decimal(num1, &a);
  // s21_from_float_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(sub_test_17) {
  float num1 = 9403.0e2;
  float num2 = 202.09e8;
  float dif_float = num1 - num2;
  s21_decimal a = {{940300, 0, 0, 0}};
  s21_decimal b = {{3029130820, 4, 0, 0}};
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(sub_test_18) {
  float num1 = -9403.0e2;
  int num2 = -202;
  float dif_float = num1 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_float_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(sub_test_19) {
  float num1 = -94;
  float num2 = -202;
  float dif_float = num1 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_float_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(sub_test_20) {
  float num1 = -1.0 / 0.0;
  int num2 = 202;
  double dif_float = 0 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_float_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(sub_test_21) {
  float num1 = 1.0 / 0.0;
  int num2 = 20;
  double dif_float = 0 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_float_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(s21_sub_int_22) {
  s21_decimal dec1;
  s21_decimal dec2;
  int tmp1 = 100;
  int tmp2 = 99999;
  int res_s21 = 0;
  int res = -99899;
  s21_decimal res1 = {{0}};
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_sub(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(s21_sub_int_23) {
  s21_decimal dec1;
  s21_decimal dec2;
  int tmp1 = -100;
  int tmp2 = -99999;
  int res_s21 = 0;
  int res = 99899;
  s21_decimal res1 = {{0}};
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_sub(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(s21_sub_int_24) {
  s21_decimal dec1;
  s21_decimal dec2;
  int tmp1 = -2147483647;
  int tmp2 = -2147483647;
  int res_s21 = 0;
  int res = 0;
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_decimal res1 = {{0}};
  s21_sub(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(s21_sub_int_25) {
  s21_decimal dec1;
  s21_decimal dec2;
  int tmp1 = -214748347;
  int tmp2 = 217483647;
  int res_s21 = 0;
  int res = -214748347 - 217483647;
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_decimal res1 = {{0}};
  s21_sub(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(s21_sub_int_26) {
  s21_decimal dec1;
  s21_decimal dec2;
  int tmp1 = 214748347;
  int tmp2 = -217483647;
  int res_s21 = 0;
  int res = 214748347 - -217483647;
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_decimal res1 = {{0}};
  s21_sub(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(s21_sub_inf_27) {
  float tmp = pow(2, 31);
  s21_decimal dec1 = {{4294967295, 4294967295, 4294967295, 0}};
  s21_decimal dec2 = {{1, 0, 0, tmp}};
  s21_decimal res1 = {{0}};
  int ret_s21 = s21_sub(dec1, dec2, &res1);
  ck_assert_int_eq(1, ret_s21);
}
END_TEST

START_TEST(s21_sub_neg_inf_28) {
  float tmp = pow(2, 31);
  s21_decimal dec1 = {{4294967295, 4294967295, 4294967295, tmp}};
  s21_decimal dec2 = {{1, 0, 0, 0}};
  s21_decimal res1 = {{0}};
  int ret_s21 = s21_sub(dec1, dec2, &res1);
  ck_assert_int_eq(2, ret_s21);
}
END_TEST

START_TEST(s21_sub_max_32) {
  s21_decimal src1 = {0};
  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal src2 = {0};
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal original_res = {0};
  original_res.bits[0] = 0b11111111111111111111111111111110;
  original_res.bits[1] = 0b11111111111111111111111111111111;
  original_res.bits[2] = 0b11111111111111111111111111111111;
  original_res.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal s21_res = {0};
  s21_sub(src1, src2, &s21_res);
  ck_assert_int_eq(s21_sub(src1, src2, &s21_res), 0);
  ck_assert_int_eq(original_res.bits[0], s21_res.bits[0]);
  ck_assert_int_eq(original_res.bits[1], s21_res.bits[1]);
  ck_assert_int_eq(original_res.bits[2], s21_res.bits[2]);
  ck_assert_int_eq(original_res.bits[3], s21_res.bits[3]);
}
END_TEST

START_TEST(s21_sub_max_35) {
  s21_decimal src1 = {0};
  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal src2 = {0};
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal s21_res = {0};
  ck_assert_int_eq(s21_sub(src1, src2, &s21_res), 2);
}
END_TEST

Suite* s21_sub_test(void) {
  Suite* s = suite_create("\033[42m-=S21_SUB=-\033[0m");
  TCase* tc = tcase_create("sub_tc");
  tcase_add_test(tc, sub_0);
  tcase_add_test(tc, sub_1);
  tcase_add_test(tc, sub_2);
  tcase_add_test(tc, sub_3);
  tcase_add_test(tc, sub_4);
  tcase_add_test(tc, sub_5);
  tcase_add_test(tc, sub_6);
  tcase_add_test(tc, sub_7);
  tcase_add_test(tc, sub_8);
  tcase_add_test(tc, sub_9);
  tcase_add_test(tc, sub_10);
  tcase_add_test(tc, sub_11);
  tcase_add_test(tc, sub_12);
  tcase_add_test(tc, sub_13);
  tcase_add_test(tc, sub_14);
  tcase_add_test(tc, sub_15);
  tcase_add_test(tc, sub_16);
  tcase_add_test(tc, sub_17);
  tcase_add_test(tc, sub_18);
  tcase_add_test(tc, sub_19);
  tcase_add_test(tc, sub_20);
  tcase_add_test(tc, sub_21);
  tcase_add_test(tc, sub_22);
  tcase_add_test(tc, sub_23);
  tcase_add_test(tc, sub_24);
  tcase_add_test(tc, sub_25);
  tcase_add_test(tc, sub_26);
  tcase_add_test(tc, sub_27);
  tcase_add_test(tc, sub_28);
  tcase_add_test(tc, s21_subTest1);
  tcase_add_test(tc, s21_subTest2);
  tcase_add_test(tc, s21_subTest3);
  tcase_add_test(tc, s21_subTest4);
  tcase_add_test(tc, s21_subTest5);
  tcase_add_test(tc, s21_subTest6);
  tcase_add_test(tc, s21_subTest7);
  tcase_add_test(tc, s21_subTest8);
  tcase_add_test(tc, s21_subTest9);
  tcase_add_test(tc, s21_subTest10);
  tcase_add_test(tc, s21_subTest11);
  tcase_add_test(tc, s21_subTest12);
  tcase_add_test(tc, s21_subTest13);
  tcase_add_test(tc, s21_subTest14);
  tcase_add_test(tc, s21_subTest15);
  tcase_add_test(tc, s21_subTest18);
  tcase_add_test(tc, s21_subTest23);
  tcase_add_test(tc, s21_subTest24);
  tcase_add_test(tc, s21_subTest25);
  tcase_add_test(tc, s21_subTest26);
  tcase_add_test(tc, s21_subTest27);
  tcase_add_test(tc, s21_subTest28);
  tcase_add_test(tc, s21_subTest33);
  tcase_add_test(tc, s21_test_decimal_sub_simple_0);
  tcase_add_test(tc, s21_test_decimal_sub_simple_1);
  tcase_add_test(tc, s21_test_decimal_sub_simple_2);
  tcase_add_test(tc, s21_test_decimal_sub_simple_3);
  tcase_add_test(tc, s21_test_decimal_sub_simple_7);
  tcase_add_test(tc, s21_test_decimal_sub_simple_8);
  tcase_add_test(tc, s21_test_decimal_sub_simple_10);
  tcase_add_test(tc, s21_test_decimal_sub_simple_11);
  tcase_add_test(tc, sub_test_11);
  tcase_add_test(tc, sub_test_12);
  tcase_add_test(tc, sub_test_14);
  tcase_add_test(tc, sub_test_15);
  tcase_add_test(tc, sub_test_16);
  tcase_add_test(tc, sub_test_17);
  tcase_add_test(tc, sub_test_18);
  tcase_add_test(tc, sub_test_19);
  tcase_add_test(tc, sub_test_20);
  tcase_add_test(tc, sub_test_21);
  tcase_add_test(tc, s21_sub_int_22);
  tcase_add_test(tc, s21_sub_int_23);
  tcase_add_test(tc, s21_sub_int_24);
  tcase_add_test(tc, s21_sub_int_25);
  tcase_add_test(tc, s21_sub_int_26);
  tcase_add_test(tc, s21_sub_inf_27);
  tcase_add_test(tc, s21_sub_neg_inf_28);
  tcase_add_test(tc, s21_sub_max_32);
  tcase_add_test(tc, s21_sub_max_35);

  suite_add_tcase(s, tc);
  return s;
}