#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/*
  CPEG 467: Secure Software Design 
  Homework 1

  '''Give me a link to a repl.it with working code so I can hit "run" and it will display a random number between 1 and 6 (roll a die)'''
*/

int generateRandom(){
  int number;
  number = (rand() % 6 + 1);
  return number;
}

int main(void) {
  srand(time(NULL));

  char ch;

  printf("Hello, Please press 'Enter' to roll the dice\n");
  while(1){
    ch = fgetc(stdin);
    if(ch == '\n'){
       printf("You Rolled a: %d\n", generateRandom());
    } else {
     printf("Invalid: Press Enter or 'control-c' to exit\n");
    }
  }
  return 0;
}