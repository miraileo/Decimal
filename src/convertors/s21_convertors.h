#ifndef SRC_S21_CONVERTORS_H_
#define SRC_S21_CONVERTORS_H_

typedef union {
  int ui;
  float fl;
} floatbits;

int s21_from_int_to_decimal(int src, s21_decimal* dst);
int s21_from_decimal_to_int(s21_decimal src, int* dst);
int s21_from_float_to_decimal(float src, s21_decimal* dst);
int s21_from_decimal_to_float(s21_decimal src, float* dst);
int Conditions(float src, s21_decimal* dst, int err);
s21_decimal s21_decimal_get_int_min(void);
s21_decimal s21_decimal_get_int_max(void);
uint32_t ftou(float num);
int read_exp(float src);

#endif