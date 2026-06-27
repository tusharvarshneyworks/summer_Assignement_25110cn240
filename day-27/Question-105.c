#include<stdio.h>

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d",&n);

    int roll[n];
    char name[n][30];
    float marks[n];

    printf("\nEnter Student Details:\n");

    for(int i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Enter Roll Number: ");
        scanf("%d",&roll[i]);

        printf("Enter Name: ");
        scanf("%s",name[i]);

        printf("Enter Marks: ");
        scanf("%f",&marks[i]);
    }

    printf("\n========== STUDENT RECORD ==========\n");

    printf("\nRoll\tName\tMarks\tResult\n");

    for(int i=0;i<n;i++)
    {
        printf("%d\t%s\t%.2f\t",roll[i],name[i],marks[i]);

        if(marks[i]>=40)
            printf("PASS");
        else
            printf("FAIL");

        printf("\n");
    }

    return 0;
}