#include<stdio.h>

int main()
{
    int n,choice,id,found=0;
    float amount;

    printf("Enter number of account holders: ");
    scanf("%d",&n);

    int accNo[n];
    char name[n][30];
    float balance[n];

    printf("\nEnter Account Details:\n");

    for(int i=0;i<n;i++)
    {
        printf("\nAccount %d\n",i+1);

        printf("Enter Account Number: ");
        scanf("%d",&accNo[i]);

        printf("Enter Account Holder Name: ");
        scanf("%s",name[i]);

        printf("Enter Initial Balance: ");
        scanf("%f",&balance[i]);
    }

    do
    {
        printf("\n========== BANK MENU ==========\n");
        printf("1. Display All Accounts\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("\nAccount No\tName\tBalance\n");

                for(int i=0;i<n;i++)
                {
                    printf("%d\t\t%s\t%.2f\n",
                    accNo[i],name[i],balance[i]);
                }

                break;

            case 2:

                printf("Enter Account Number: ");
                scanf("%d",&id);

                found=0;

                for(int i=0;i<n;i++)
                {
                    if(accNo[i]==id)
                    {
                        printf("Enter Deposit Amount: ");
                        scanf("%f",&amount);

                        if(amount>0)
                        {
                            balance[i]+=amount;
                            printf("Deposit Successful\n");
                            printf("Updated Balance = %.2f\n",balance[i]);
                        }
                        else
                        {
                            printf("Invalid Amount\n");
                        }

                        found=1;
                        break;
                    }
                }

                if(found==0)
                {
                    printf("Account Not Found\n");
                }

                break;

            case 3:

                printf("Enter Account Number: ");
                scanf("%d",&id);

                found=0;

                for(int i=0;i<n;i++)
                {
                    if(accNo[i]==id)
                    {
                        printf("Enter Withdrawal Amount: ");
                        scanf("%f",&amount);

                        if(amount<=0)
                        {
                            printf("Invalid Amount\n");
                        }
                        else if(amount>balance[i])
                        {
                            printf("Insufficient Balance\n");
                        }
                        else
                        {
                            balance[i]-=amount;
                            printf("Withdrawal Successful\n");
                            printf("Remaining Balance = %.2f\n",balance[i]);
                        }

                        found=1;
                        break;
                    }
                }

                if(found==0)
                {
                    printf("Account Not Found\n");
                }

                break;

            case 4:

                printf("Thank You For Using Bank Management System\n");
                break;

            default:

                printf("Invalid Choice\n");
        }

    }while(choice!=4);

    return 0;
}