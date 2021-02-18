#include <stdio.h>
#include <stdlib.h>
/*

CPEG676: Secure Software Design HW 2
Give me a link to a repl.it with working code so I can hit "run". Take in an arbitrarily long piece of text from me without predicting ahead of time how long my text will be. Use C not C++.
*/

int main(void) {
  char *str, c;
  int i = 0, j = 1;
  str = (char*)malloc(sizeof(char));

  printf("Enter String : ");
  while (c != '\n') {
    // read the input from keyboard standard input
    c = getc(stdin);
    // re-allocate (resize) memory for character read to be stored
    str = (char*)realloc(str, j * sizeof(char));
    // store read character by making pointer point to c
    str[i] = c;
    i++;
    j++;
  }
  str[i] = '\0'; // at the end append null character to mark end of string
  printf("\nThe Dynamically Allocated String is: %s", str);
  free(str); 
}