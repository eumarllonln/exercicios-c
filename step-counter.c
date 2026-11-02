#include <stdio.h>

int main() {
    int steps;
    int total = 0;
    int hours = 0;

    while (total < 10000) {
        hours = hours + 1;
        printf("Hour %d - steps taken: ", hours);
        scanf("%d", &steps);

        total = total + steps;
    }

    printf("\nGoal reached! Total: %d steps.\n", total);
    printf("It took %d hour(s).\n", hours);

    return 0;
}
