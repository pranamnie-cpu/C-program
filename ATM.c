#include <stdio.h>

int main() {
    int ch, bal = 0, amount;

    do {
        printf("\n1. Balance\n2. Deposit\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Balance = %d\n", bal);
                break;

            case 2:
                printf("Enter amount: ");
                scanf("%d", &amount);
                bal += amount;
                printf("Deposit successful!\n");
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (ch != 3);

    return 0;
}
