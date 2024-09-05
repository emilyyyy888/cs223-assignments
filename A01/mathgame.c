/**
 * mathgame.c
 * Implements a simple math game that allows the user 
 * to solve random addition problems.
 * 
 * @author: Emily Lu
 * @version: September 5, 2024
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rounds;        // Number of rounds to play
    int num1, num2;    // Two random numbers 
    int answer;        // The user's answer
    int correctAns;    // Correct answer
    int correct = 0;   // Count of correct answers

    printf("Welcome to Math Game!\n");
    printf("How many rounds do you want to play? ");
    scanf("%d", &rounds);

    // Loop through the specified number of rounds
    for (int i = 0; i < rounds; i++) {
        num1 = rand() % 9 + 1;
        num2 = rand() % 9 + 1;
        
        printf("%d + %d = ? ", num1, num2);
        scanf("%d", &answer);

        correctAns = num1 + num2;

        // Check if the user's answer is correct
        if (answer == correctAns) {
            printf("Correct!\n");
            correct++;  // Increment correct answer count
        } else {
            printf("Incorrect. The correct answer is %d.\n", correctAns);
        }
    }

    printf("You answered %d/%d correctly.\n", correct, rounds);

    return 0; 
}
