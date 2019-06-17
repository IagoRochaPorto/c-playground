#include <stdio.h>

int main(void) {
  int a = 359;

  if(-1 == 4 || a < 400) {
    int chave = 3;
    printf("O resultado eh %d\n", chave);
  }

  printf("a: %d\n", a);

  return 0;
}