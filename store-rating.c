#include <stdio.h>

int main() {
    float rating;
    float sum = 0;
    float average;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("Customer %d - rating (0 to 10): ", i);
        scanf("%f", &rating);

        sum = sum + rating;
    }

    average = sum / 10;
    printf("\nAverage rating: %.2f\n", average);

    if (average < 7) {
        printf("WARNING: the average is below 7!\n");
    } else {
        printf("The average is 7 or above.\n");
    }

    return 0;
}
