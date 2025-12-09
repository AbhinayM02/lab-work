#include <stdio.h>

#define MAX_MOVIES 5

// Movie structure
struct Movie {
    int id;
    char name[100];
    int availableSeats;
    float ticketPrice;
};

// Function declarations
void showMovies(struct Movie movies[], int n);
void bookTicket(struct Movie movies[], int n);

int main() {
    struct Movie movies[MAX_MOVIES] = {
        {1, "Inception", 50, 10.5},
        {2, "Avengers", 40, 12.0},
        {3, "Dark Knight", 30, 9.0},
        {4, "Interstellar", 35, 11.0},
        {5, "Joker", 25, 8.5}
    };

    int choice;
    int running = 1;

    while (running) {
        printf("\n===== Movie Ticket Booking =====\n");
        printf("1. Show Movies\n");
        printf("2. Book Ticket\n");
        printf("3. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            showMovies(movies, MAX_MOVIES);
        } else if (choice == 2) {
            bookTicket(movies, MAX_MOVIES);
        } else if (choice == 3) {
            printf("Exiting program. Thank you!\n");
            running = 0;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Function to display movies
void showMovies(struct Movie movies[], int n) {
    int i;
    printf("\nAvailable Movies:\n");
    printf("ID\tName\t\tSeats\tPrice\n");
    printf("----------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%-15s\t%d\t%.2f\n", movies[i].id, movies[i].name, movies[i].availableSeats, movies[i].ticketPrice);
    }
}

// Function to book ticket
void bookTicket(struct Movie movies[], int n) {
    int movieId, tickets;
    printf("\nEnter movie ID to book: ");
    scanf("%d", &movieId);

    if (movieId < 1 || movieId > n) {
        printf("Invalid movie ID.\n");
        return;
    }

    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    if (tickets <= 0) {
        printf("Invalid number of tickets.\n");
        return;
    }

    if (tickets > movies[movieId - 1].availableSeats) {
        printf("Not enough seats available. Only %d seats left.\n", movies[movieId - 1].availableSeats);
        return;
    }

    movies[movieId - 1].availableSeats -= tickets;

    printf("\nBooking Confirmed!\n");
    printf("Movie: %s\n", movies[movieId - 1].name);
    printf("Tickets: %d\n", tickets);
    printf("Total: $%.2f\n", tickets * movies[movieId - 1].ticketPrice);
}

