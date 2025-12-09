#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TRIES 6

// Function to display the current state of the word
void displayWord(char word[], int guessed[]) {
	int i;
    for (i = 0; word[i] != '\0'; i++) {
        if (guessed[i])
            printf("%c ", word[i]);
        else
            printf("_ ");
    }
    printf("\n");
}

// Function to check if the word has been completely guessed
int isWordGuessed(char word[], int guessed[]) {
    int i;
    for (i = 0; word[i] != '\0'; i++) {
        if (!guessed[i])
            return 0;
    }
    return 1;
}

int main() {
    char word[] = "ogasgambheera";  // ?? Secret word (you can change this)
    int guessed[50];         // Array to track guessed letters (support up to 50 letters)
    int chances = MAX_TRIES;
    char guess;
    int correct, i;

    // Initialize guessed[] to 0
    for (i = 0; i < strlen(word); i++) {
        guessed[i] = 0;
    }

    printf("====== HANGMAN GAME ======\n");
    printf("Guess the word! You have %d wrong attempts allowed.\n\n", MAX_TRIES);

    while (chances > 0) {
        printf("Word: ");
        displayWord(word, guessed);

        printf("Guess a letter: ");
        scanf(" %c", &guess);  // The space before %c is important!
        guess = tolower(guess);  // Convert input to lowercase

        correct = 0;

        // Check if guess is in the word
        for (i = 0; word[i] != '\0'; i++) {
            if (word[i] == guess && !guessed[i]) {
                guessed[i] = 1;
                correct = 1;
            }
        }

        if (correct) {
            printf("? Good guess!\n");
        } else {
            chances--;
            printf("? Wrong! Attempts left: %d\n", chances);
        }

        if (isWordGuessed(word, guessed)) {
            printf("\n?? You guessed the word: %s\n", word);
            break;
        }

        printf("\n");
    }

    if (!isWordGuessed(word, guessed)) {
        printf("?? Out of attempts! The word was: %s\n", word);
    }

    return 0;
}

