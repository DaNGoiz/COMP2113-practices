#include <stdio.h>

int main() {
    int total_seats = 6;
    int total_votes = 900000;
    int num_lists = 8;
    int votes[] = {80000, 120000, 400000, 60000, 6000, 180000, 34000, 20000};
    int quota = total_votes / total_seats;
    int automatic_seats[num_lists];
    int remainders[num_lists];

    printf("Total number of seats: %d\n", total_seats);
    printf("Total number of votes: %d\n", total_votes);
    printf("Total number of lists: %d\n", num_lists);

    for(int i = 0; i < num_lists; i++) {
        automatic_seats[i] = votes[i] / quota; // Calculate automatic seats
        remainders[i] = votes[i] % quota;      // Calculate remainders
        printf("Votes for list %d: %d\n", i + 1, votes[i]);
        printf("Automatic seat for list %d: %d\n", i + 1, automatic_seats[i]);
        printf("Remainder for list %d: %d\n", i + 1, remainders[i]);
    }

    return 0;
}
