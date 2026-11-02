#include <stdio.h>

int main() {
    int option;
    float total = 0;
    do {
        printf("\n--- Piggy Bank ---\n");
        printf("1 - Add R$0.50\n");
        printf("2 - Add R$1.00\n");
        printf("3 - Add R$2.00\n");
        printf("0 - Stop\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        if (option == 1) {
            total = total + 0.50;
        } else if (option == 2) {
            total = total + 1.00;
        } else if (option == 3) {
            total = total + 2.00;
        } else if (option != 0) {
            printf("Invalid option. Please try again.\n");
        }
    } while (option != 0);

    printf("\nTotal saved: R$%.2f\n", total);

    return 0;
}
