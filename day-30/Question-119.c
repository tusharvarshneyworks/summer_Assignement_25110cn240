#include<stdio.h>

int main()
{
    int n,choice,id,found=0;
    int empId[100];
    char name[100][30];
    float basic[100],hra[100],da[100],gross[100];

    printf("Enter number of employees: ");
    scanf("%d",&n);

    printf("\nEnter Employee Details:\n");

    for(int i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i+1);

        printf("Enter Employee ID: ");
        scanf("%d",&empId[i]);

        printf("Enter Employee Name: ");
        scanf("%s",name[i]);

        printf("Enter Basic Salary: ");
        scanf("%f",&basic[i]);

        hra[i]=basic[i]*0.20;
        da[i]=basic[i]*0.10;
        gross[i]=basic[i]+hra[i]+da[i];
    }

    do
    {
        printf("\n========== EMPLOYEE PAYROLL SYSTEM ==========\n");
        printf("1. Display Payroll\n");
        printf("2. Search Employee\n");
        printf("3. Update Basic Salary\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("\nID\tName\tBasic\tHRA\tDA\tGross\n");

                for(int i=0;i<n;i++)
                {
                    printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
                    empId[i],name[i],basic[i],hra[i],da[i],gross[i]);
                }

                break;

            case 2:

                printf("Enter Employee ID: ");
                scanf("%d",&id);

                found=0;

                for(int i=0;i<n;i++)
                {
                    if(empId[i]==id)
                    {
                        printf("\nEmployee Found\n");
                        printf("ID : %d\n",empId[i]);
                        printf("Name : %s\n",name[i]);
                        printf("Basic Salary : %.2f\n",basic[i]);
                        printf("Gross Salary : %.2f\n",gross[i]);

                        found=1;
                        break;
                    }
                }

                if(found==0)
                {
                    printf("Employee Not Found\n");
                }

                break;

            case 3:

                printf("Enter Employee ID: ");
                scanf("%d",&id);

                found=0;

                for(int i=0;i<n;i++)
                {
                    if(empId[i]==id)
                    {
                        printf("Enter New Basic Salary: ");
                        scanf("%f",&basic[i]);

                        hra[i]=basic[i]*0.20;
                        da[i]=basic[i]*0.10;
                        gross[i]=basic[i]+hra[i]+da[i];

                        printf("Salary Updated Successfully\n");

                        found=1;
                        break;
                    }
                }

                if(found==0)
                {
                    printf("Employee Not Found\n");
                }

                break;

            case 4:

                printf("Thank You For Using Employee Payroll System\n");
                break;

            default:

                printf("Invalid Choice\n");
        }

    }while(choice!=4);

    return 0;
}