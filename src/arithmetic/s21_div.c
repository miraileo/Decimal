#include "../s21_decimal.h"

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int flag = 0;
  int divider = 0;
  double res = 0;
  int dividend = 0;
  double num1 = 0;
  double num2 = 0;
  int exp1 = s21_get_scale(value_1);
  int exp2 = s21_get_scale(value_2);
  if (result != NULL) {
    if (zeroDecimal(&value_2, 0)) flag = 3;
    if (value_2.bits[1] != 0)
      divider = 1;
    else if (value_2.bits[2] != 0)
      divider = 2;
    if (flag != 3) {
      for (int i = 0; i <= 2; i++) {
        if (value_1.bits[dividend] == 0) dividend++;
        num1 = value_1.bits[dividend];
        num2 = value_2.bits[divider];
        if ((unsigned int)num1 == value_1.bits[3]) break;
        res = (num1 / pow(10, exp1)) / (num2 / pow(10, exp2));
        if ((i == 2 || dividend == 2) && res > MAX_INT) flag = 1;
        if (dividend) res *= MAX_INT + 1;
        if (divider) res /= MAX_INT;
        result->bits[i] = result->bits[i] + res;
        dividend++;
      }
    }
    if (flag && ((s21_get_sign(value_1) && !s21_get_sign(value_2)) ||
                 (!s21_get_sign(value_1) && s21_get_sign(value_2))))
      flag = 2;
  }
  return flag;
}