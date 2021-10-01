#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int square_numbers_amount = 10;

  int *square_numbers = (int *) malloc(sizeof(int) * square_numbers_amount);

  for (int i = 0; i < square_numbers_amount; i++) {
    square_numbers[i] = pow(i, 2);
  }

  for (int i = 0; i < square_numbers_amount; i++) {
    printf("position: %d, square number: %d", i, square_numbers[i]);
  }
}
