#include <stdio.h>

int main(void) {
  char c;

  printf("O tamanho de c (char): %lu byte(s) / %lu bit(s)\n", sizeof c, sizeof c * 8);

  c = 10; // decimal = 10
  c = 0xa; // decimal = 10
  c = '\n'; // decimal = 10
  
  printf("Valor de c: %i\n", c);

  return 0;
}