#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int a[] = { 2017, 2018, 2019 };

  for(int i = 0; i < 3; i++) {
    printf("%d\n", a[i]);
  }

  return 0;
}