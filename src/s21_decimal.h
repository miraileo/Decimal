#ifndef SRC_S21_DECIMAL_H_
#define SRC_S21_DECIMAL_H_

#include <limits.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_DEC powf(2.0f, 96.0f) - 1.0
#define MIN_DEC -powf(2.0f, 96.0f) + 1.0
#define MAX_INT 4294967295

typedef struct {
  unsigned int bits[4];
} s21_decimal;

#include "another/s21_another.h"
#include "arithmetic/s21_arithmetics.h"
#include "comparison//s21_comparasions.h"
#include "convertors/s21_convertors.h"
#include "helpers/s21_helpers.h"

#endif