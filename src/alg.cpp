// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

double pown(double value, uint16_t n) {
  while (n != 1) {
    value *= value;
    n--;
  }
  return value;
}

uint16_t fact(uint16_t n) {
  if (n == 0) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double result = 0;
  for (uint16_t i = 0; i < count; ++i) {
    result += pown(x, i) / fact(i);
  }
  return result;
}

double sinn(double x, uint16_t count) {
  double result = 0;
  for (uint16_t n = 0; n < count; ++n) {
    result += (pown(-1, n) / fact(2*n + 1)) * pown(x, 2*n + 1);
  }
  return result;
}

double cosn(double x, uint16_t count) {
  double result = 0;
  for (uint16_t n = 0; n < count; ++n) {
    result += (pown(-1, n) / fact(2*n)) * pown(x, 2*n);
  }
  return result;
}
