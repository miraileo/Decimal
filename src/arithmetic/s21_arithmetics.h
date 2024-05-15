#ifndef SRC_S21_ARITHMETICS_H_
#define SRC_S21_ARITHMETICS_H_

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal* result);
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal* result);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal* result);
int s21_mod(s21_decimal value_1, s21_decimal value_2, s21_decimal* result);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal* result);

int mulByAdd(s21_decimal value_1, s21_decimal value_2, int i, int bitNumber);
int Overflow(s21_decimal val1, s21_decimal val2);
int add_both_different_sign(s21_decimal value_1, s21_decimal value_2,
                            s21_decimal* result);
int add_both_same_sign(s21_decimal value_1, s21_decimal value_2,
                       s21_decimal* result);
int sub_both_same_sign(s21_decimal value_1, s21_decimal value_2,
                       s21_decimal* result);
int sub_both_different_sign(s21_decimal value_1, s21_decimal value_2,
                            s21_decimal* result);
#endif