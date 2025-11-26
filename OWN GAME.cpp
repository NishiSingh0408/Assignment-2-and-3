#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, lives = 5, score = 0;
    char play;

    srand(time(NULL));

    do {
        number = rand() % 50 + 1;
        lives = 5;

        printf("===== NUMBER GUESSING GAME =====\n");

        while(lives > 0) {
            printf("\nEnter your guess: ");
            scanf("%d", &guess);

            if(guess == number) {
                printf("Correct! You win.\n");
                score++;
                break;
            }
            else if(guess < number) {
                printf("Too Low!\n");
            }
            else {
                printf("Too High!\n");
            }

            lives--;
            printf("Lives left: %d\n", lives);
        }

        if(lives == 0) {
            printf("\nGame Over! Number was: %d\n", number);
        }

        printf("Current Score: %d\n", score);

        printf("\nPlay again? (y/n): ");
        scanf(" %c", &play);

    } while(play == 'y');

    return 0;
}

