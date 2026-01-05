#include <stdio.h>
int main() {
    int matchsticks = 21;
    int user_choice, computer_choice;
    printf("Welcome to the Matchstick Game!\n");
    printf("Rules: Pick 1-4 sticks. Whoever picks the last stick loses.\n\n"); 
    while (matchsticks > 1) {
        printf("Remaining matchsticks: %d\n", matchsticks);
// User's turn
    do {
        printf("How many matchsticks do you want to pick (1-4)? ");
        scanf("%d", &user_choice);
        if (user_choice < 1 || user_choice > 4) {
        printf("Invalid choice. Please pick between 1 and 4.\n");
        }
    } while (user_choice < 1 || user_choice > 4);
    matchsticks -= user_choice;
    printf("You picked %d matchsticks.\n", user_choice);
    if (matchsticks <= 1) {
        printf("Remaining matchsticks: %d\n", matchsticks);
        printf("You are forced to pick the last matchstick. You lose!\n");
    break;
    }
// Computer's turn
    computer_choice = 5 - user_choice;
    printf("Computer picks %d matchsticks.\n", computer_choice);
    matchsticks -= computer_choice;
    if (matchsticks <= 1) {
        printf("Remaining matchsticks: %d\n", matchsticks);
        printf("Computer leaves you with the last matchstick. You lose!\n");
        break;  
    }
    }
return 0;
} 