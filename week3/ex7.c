#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    while (1) {
        int player_choice;
        printf("Welcome to the ROCK-PAPER-SCISSORS game\n");
        printf("ROCK: 0, PAPER: 1, SCISSORS: 2, EXIT: -1\n");
        printf("Enter an integer of your choice: ");
        scanf("%d", &player_choice);
        if (player_choice != -1 && player_choice != 0 && player_choice != 1 && player_choice != 2) {
            printf("Invalid choice. You must enter one the above integers.\n\n");
            continue;
        }

        if (player_choice == -1) {
            break;
        }

        switch(player_choice) {
            case 0:
                printf("You pick ROCK\n");
                break;
            case 1:
                printf("You pick PAPER\n");
                break;
            case 2:
                printf("You pick SCISSORS\n");
                break;
        }

        srand(time(NULL));
        int computer_choice = 0 + rand() % (2 - 0 + 1); 

        switch(computer_choice) {
            case 0:
                printf("Computer pick ROCK\n");
                break;
            case 1:
                printf("Computer pick PAPER\n");
                break;
            case 2:
                printf("Computer pick SCISSORS\n");
                break;
        }

        if (player_choice - computer_choice == -1 || player_choice == 2 && computer_choice == 0) {
            printf("You LOST\n");
        } else if (player_choice - computer_choice == 1 || player_choice == 0 && computer_choice == 2) {
            printf("You WON\n");
        } else {
            printf("It's a drawn\n");
        }

        printf("\n");
    }


    return 0;
}