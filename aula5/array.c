#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  unsigned char c[3];
  
  printf("O tamanho de c (array) eh: %zu bits / %zu bytes\n", sizeof c, sizeof c * 8);
  printf("A quantidade de elementos em c (array) eh: %zu\n", sizeof c / sizeof c[0]);

  c[0] = 'A';
  c[1] = 0x42;
  c[2] = 67;

  printf("O elemento 0 de c (array) eh: %c\n", c[0]);
  printf("O elemento 1 de c (array) eh: %c\n", c[1]);
  printf("O elemento 2 de c (array) eh: %c\n", c[2]);

  printf("O endereco do array c em memoria: %p\n", c);
  printf("O endereco do array &c em memoria: %p\n", &c);
  printf("O endereco do primeiro elemento do array c em memoria: %p\n", &c[0]);
  printf("O endereco do segundo elemento do array c em memoria: %p\n", &c[1]);

  return 0;
}