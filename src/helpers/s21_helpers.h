#ifndef SRC_S21_HELPERS_H_
#define SRC_S21_HELPERS_H_

void print_s21_decimal_binary(s21_decimal value);

int s21_get_bit(s21_decimal num, int bit);
void s21_set_bit(s21_decimal* decl, int index, int bit);
int s21_get_sign(s21_decimal num);
void s21_set_sign(s21_decimal* num, int sign_value);
void s21_null_decimal(s21_decimal* num);
int s21_is_zero(s21_decimal value);
void s21_set_scale(s21_decimal* num, int scale_value);
int s21_get_scale(s21_decimal num);
int s21_is_set_bit(int number, int index);
int s21_decimal_is_set_bit(s21_decimal decimal, int index);
s21_decimal s21_get_zero_decimal(void);
int zeroDecimal(s21_decimal* value, int command);

#endif