/***************************************************
 * mathgame.c
 * Author: Emily Lu
 * Implements a math game
 */

#include <stdio.h>

int main() {
  printf("Welcome to Math Game!\n");
  printf("How many rounds do you want to play? ");
  scanf("%d", &rounds);

  for (int i = 0; i < rounds; i++){
    num1 = rand() % 9 + 1;
    num2 = rand() % 9 + 1;
    
    prinf("%d + %d = ? ", num1, num2);
    scanf("%d", &answer);

    correctAns = num1 + num2;
    if (answer == correctAns){
      printf("Correct!\n");
    } else {
      printf("Incorrect :(\n");
    }
  }

  printf("You answered %d/%d correctly.\n", correct, rounds);
  return 0;
}
