#include<stdio.h>

int main()
{
    int n;
    float total=0,average;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    int id[n];
    char name[n][30];
    float basic[n],hra[n],da[n],gross[n];

    printf("\nEnter Employee Details:\n");

    for(int i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i+1);

        printf("Enter Employee ID: ");
        scanf("%d",&id[i]);

        printf("Enter Employee Name: ");
        scanf("%s",name[i]);

        printf("Enter Basic Salary: ");
        scanf("%f",&basic[i]);

        hra[i]=basic[i]*0.20;
        da[i]=basic[i]*0.10;
        gross[i]=basic[i]+hra[i]+da[i];

        total=total+gross[i];
    }

    average=total/n;

    printf("\n========== SALARY REPORT ==========\n");

    printf("\nID\tName\tBasic\tHRA\tDA\tGross\n");

    for(int i=0;i<n;i++)
    {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
        id[i],name[i],basic[i],hra[i],da[i],gross[i]);
    }

    printf("\nTotal Salary = %.2f\n",total);
    printf("Average Salary = %.2f\n",average);

    return 0;
}