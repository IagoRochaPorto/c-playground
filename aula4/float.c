#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  float f = 1;
  long double d = 1.0;

  printf("O tamanho de f (float): %lu byte(s) / %lu bit(s)\n", sizeof f, sizeof f * 8);
  printf("O valor de f eh: %.2f\n", f);
  
  printf("O tamanho de d (double): %zu byte(s) / %zu bit(s)\n", sizeof d, sizeof d * 8);

  return 0;
}