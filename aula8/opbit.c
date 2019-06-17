#include <stdio.h>

int main(void) {
  int a = 2; // em binario:          10
  int b = 3; // em binario:          11
             // conjuncao:           10
             // disjuncao:           11
             // disjuncao exclusiva: 01
  
  int n = 10; // -> bin:    0 | 00000000000000000000000000001010 (+10)
              // negacao:   1 | 11111111111111111111111111110101 (-11)

  int shift = 0b1000;

  printf("O resultado eh %d\n", a & b);
  printf("O resultado eh %d\n", a | b);
  printf("O resultado eh %d\n", a ^ b);
  printf("O resultado eh %d\n", ~n);
  printf("O resultado eh %d\n", shift << 1); // multiplicar pela base
  printf("O resultado eh %d\n", shift >> 1); // dividir pela base

  return 0;
}