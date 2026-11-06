#include <stdio.h>
int main() {
    float sum = 0;
    float consumption;
    float average;
    int i;

    for(i=1; i<=5; i++) {
        printf("Household %d - water consumption (m3): ", i);
        scanf("%f", &consumption);
        sum = sum + consumption;
        if (consumption <= 20 ) {
            printf("Household %d: within average\n", i);
        } else {
            printf("Household %d: above average\n", i);
        }

    }
    average = sum / 5;
    printf("\nOverall average: %.2f m3", average);

    return 0;
}
