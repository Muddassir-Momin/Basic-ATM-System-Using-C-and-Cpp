#include <iostream>
#include <stdlib.h>
#define PIN 2023
#define BALANCE 100000

int main()
{
    int Userpin, total = BALANCE;
    std::cout << "Enter Your Pin Number:";
    std::cin >> Userpin;

    if (Userpin == PIN)
    {
        while (1)
        {
            int choice;
            std::cout << "\n1-Withdraw\n2-Deposit\n3-Check Balance\n4-Exit" << std::endl;
            std::cout << "\nEnter Your Choice:";
            std::cin >> choice;
            switch (choice)
            {
            case 1:
            {
                int withdraw;
                std::cout << "\nEnter Amount To Be Withdraw:";
                std::cin >> withdraw;
                if (withdraw <= total && withdraw > 0)
                {
                    total -= withdraw;
                    std::cout << "Successfully Withdraw!"<<std::endl;
                }
                else
                {
                    std::cout << "\nPlease Enter Correct Amount!";
                }
            }
            break;

            case 2:
            {
                int deposit;
                std::cout << "\nEnter Amount to be Deposit:";
                std::cin >> deposit;
                if (deposit > 0)
                {
                    total += deposit;
                    std::cout << "Thanks For Deposit Amount!\n";
                }
                else
                {
                    std::cout << "\nEnter Valid Amount!";
                }
            }
            break;

            case 3:
            {
                std::cout << "\nYour Total Amount is " << total<<std::endl;
            }
            break;

            case 4:
            {
                exit(0);
                std::cout<<"\nThank You For Using Our Service!";
            }

            default:
                std::cout << "\nPlease Enter Correct Choice!";
                break;
            }
        }
    }
    else
    {
        std::cout << "\nUser Pin is Invalid!";
    }
    return 0;
}