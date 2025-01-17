#include <stdio.h>
#include <stdlib.h>

#define PIN 2023
#define INITIAL_AMOUNT 50000

int main()
{
    int userpin, pin = PIN;
    int total_amount = INITIAL_AMOUNT; 
    int choice;

    printf("Enter Your Pin: ");
    scanf("%d", &userpin);

    if (userpin == pin)
    {
        while (1)
        {
            printf("\n1 - Withdraw\n2 - Deposit\n3 - Check Balance\n4 - Exit");
            printf("\nEnter Your Choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
            {
                int withdraw;
                printf("Enter Withdrawal Amount: ");
                scanf("%d", &withdraw);

                if (withdraw > 0 && total_amount >= withdraw)
                {
                    total_amount -= withdraw;
                    printf("₹%d Withdrawn Successfully!\n", withdraw);
                }
                else
                {
                    printf("Invalid Amount or Insufficient Balance!\n");
                }
                break;
            }
            case 2:
            {
                int deposit;
                printf("Enter Amount to Deposit: ");
                scanf("%d", &deposit);

                if (deposit > 0)
                {
                    total_amount += deposit;
                    printf("₹%d Deposited Successfully!\n", deposit);
                }
                else
                {
                    printf("Invalid Deposit Amount!\n");
                }
                break;
            }
            case 3:
                printf("Your Current Balance is ₹%d\n", total_amount);
                break;
            case 4:
                printf("Thank you for using our service!\n");
                exit(0);
                break;
            default:
                printf("Your Choice is Invalid!\n");
                break;
            }
        }
    }
}