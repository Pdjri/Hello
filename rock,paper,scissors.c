#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerChoice, computerChoice;
    
    // Seed the random number generator
    srand(time(0));

    // Display choices
    printf("Welcome to Rock, Paper, Scissors Game!\n");
    printf("Choose one of the following:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    // Get player input
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &playerChoice);
    
    // Input validation
    if (playerChoice < 1 || playerChoice > 3) {
        printf("Invalid choice. Please enter 1, 2, or 3.\n");
        return 1;
    }

    // Generate computer's random choice
    computerChoice = (rand() % 3) + 1;

    // Display choices
    const char *choices[] = {"Rock", "Paper", "Scissors"};
    printf("You chose: %s\n", choices[playerChoice - 1]);
    printf("Computer chose: %s\n", choices[computerChoice - 1]);

    // Determine the result
    if (playerChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((playerChoice == 1 && computerChoice == 3) || 
               (playerChoice == 2 && computerChoice == 1) || 
               (playerChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
