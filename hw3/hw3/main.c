#include <stdio.h>
#include <stdlib.h>
#include "c-algorithms/src/compare-int.h"

// Cloned 
//https://github.com/fragglet/c-algorithms

int main(void) {
  int number_1;
  int number_2;

  printf("Compare using c-algorithms library provided through Github\n");
  printf("Test it by inputting two numbers\n");
  printf("\n");

  printf("Enter a Number: ");
  scanf("%d", &number_1);
  printf("Enter another Number: ");
  scanf("%d", &number_2);

  if(int_equal(&number_1, &number_2)){
    printf("Equal: True \n");
  } else {
    printf("These are not the same\n");
  }
  return 0;
}
