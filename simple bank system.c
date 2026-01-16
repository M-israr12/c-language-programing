#include <stdio.h>

int main() {
    int choice;
    float balance = 100000.0, deposit, withdraw;

    printf("====Welcome to Simple Bank===!\n");

    do {
        printf("\nBank Menu:\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &deposit);
                if(deposit > 0) {
                    balance += deposit;
                    printf("Successfully deposited %.2f\n", deposit);
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &withdraw);
                if(withdraw > 0 && withdraw <= balance) {
                    balance -= withdraw;
                    printf("Successfully withdrawn %.2f\n", withdraw);
                } else if(withdraw > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 3:
                printf("Your current balance is: %.2f\n", balance);
                break;

            case 4:
                printf("Thank you for using Simple Bank!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 4);

    return 0;
}
