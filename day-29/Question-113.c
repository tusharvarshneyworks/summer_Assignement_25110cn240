#include<stdio.h>

int main()
{
    int choice;
    float a,b,result;

    do
    {
        printf("\n========== MENU DRIVEN CALCULATOR ==========\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("Enter two numbers: ");
                scanf("%f %f",&a,&b);

                result=a+b;
                printf("Result = %.2f\n",result);
                break;

            case 2:

                printf("Enter two numbers: ");
                scanf("%f %f",&a,&b);

                result=a-b;
                printf("Result = %.2f\n",result);
                break;

            case 3:

                printf("Enter two numbers: ");
                scanf("%f %f",&a,&b);

                result=a*b;
                printf("Result = %.2f\n",result);
                break;

            case 4:

                printf("Enter two numbers: ");
                scanf("%f %f",&a,&b);

                if(b==0)
                {
                    printf("Division by zero is not possible\n");
                }
                else
                {
                    result=a/b;
                    printf("Result = %.2f\n",result);
                }

                break;

            case 5:
            {
                int x,y;

                printf("Enter two integers: ");
                scanf("%d %d",&x,&y);

                if(y==0)
                {
                    printf("Modulus by zero is not possible\n");
                }
                else
                {
                    printf("Result = %d\n",x%y);
                }

                break;
            }

            case 6:

                printf("Thank You For Using Calculator\n");
                break;

            default:

                printf("Invalid Choice\n");
        }

    }while(choice!=6);

    return 0;
}