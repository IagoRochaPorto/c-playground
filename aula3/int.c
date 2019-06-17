#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  long long i = LLONG_MAX;
  size_t s = 0;

  printf("O tamanho de i (long long int): %lu byte(s) / %zu bit(s)\n", sizeof i, sizeof i * 8);
  printf("O valor de i eh: %llu\n", i);

  printf("O tamanho de s (size_t): %u byte(s) / %zu bit(s)\n", sizeof s, sizeof s * 8);
  printf("O valor de s eh: %zu\n", s);


  return 0;
}