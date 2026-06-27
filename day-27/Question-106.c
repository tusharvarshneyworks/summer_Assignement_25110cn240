#include<stdio.h>

int main()
{
    int n;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    int id[n];
    char name[n][30];
    float salary[n];

    printf("\nEnter Employee Details:\n");

    for(int i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i+1);

        printf("Enter Employee ID: ");
        scanf("%d",&id[i]);

        printf("Enter Employee Name: ");
        scanf("%s",name[i]);

        printf("Enter Salary: ");
        scanf("%f",&salary[i]);
    }

    printf("\n========== EMPLOYEE RECORD ==========\n");

    printf("\nID\tName\tSalary\n");

    for(int i=0;i<n;i++)
    {
        printf("%d\t%s\t%.2f\n",id[i],name[i],salary[i]);
    }

    float highest=salary[0],lowest=salary[0];
    int h=0,l=0;

    for(int i=1;i<n;i++)
    {
        if(salary[i]>highest)
        {
            highest=salary[i];
            h=i;
        }

        if(salary[i]<lowest)
        {
            lowest=salary[i];
            l=i;
        }
    }

    printf("\nHighest Salary\n");
    printf("ID : %d\n",id[h]);
    printf("Name : %s\n",name[h]);
    printf("Salary : %.2f\n",highest);

    printf("\nLowest Salary\n");
    printf("ID : %d\n",id[l]);
    printf("Name : %s\n",name[l]);
    printf("Salary : %.2f\n",lowest);

    return 0;
}