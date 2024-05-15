#include "../s21_decimal.h"

int s21_is_set_bit(int number, int index) { return !!(number & (1U << index)); }