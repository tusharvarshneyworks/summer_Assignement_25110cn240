#include<stdio.h>

int main()
{
    int roll;
    char name[30];
    float m1,m2,m3,m4,m5,total,percentage;

    printf("******** MARKSHEET GENERATION SYSTEM ********\n");

    printf("Enter Roll Number: ");
    scanf("%d",&roll);

    printf("Enter Student Name: ");
    scanf("%s",name);

    printf("Enter Marks of Subject 1: ");
    scanf("%f",&m1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f",&m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f",&m3);

    printf("Enter Marks of Subject 4: ");
    scanf("%f",&m4);

    printf("Enter Marks of Subject 5: ");
    scanf("%f",&m5);

    total=m1+m2+m3+m4+m5;
    percentage=total/5;

    printf("\n========== MARKSHEET ==========\n");

    printf("Roll Number : %d\n",roll);
    printf("Student Name : %s\n",name);

    printf("\n---------------------------------\n");
    printf("Subject 1 : %.2f\n",m1);
    printf("Subject 2 : %.2f\n",m2);
    printf("Subject 3 : %.2f\n",m3);
    printf("Subject 4 : %.2f\n",m4);
    printf("Subject 5 : %.2f\n",m5);
    printf("---------------------------------\n");

    printf("Total Marks : %.2f\n",total);
    printf("Percentage : %.2f%%\n",percentage);

    if(m1<33||m2<33||m3<33||m4<33||m5<33)
    {
        printf("Result : FAIL\n");
    }
    else
    {
        printf("Result : PASS\n");

        if(percentage>=90)
            printf("Grade : A+\n");
        else if(percentage>=80)
            printf("Grade : A\n");
        else if(percentage>=70)
            printf("Grade : B\n");
        else if(percentage>=60)
            printf("Grade : C\n");
        else if(percentage>=50)
            printf("Grade : D\n");
        else
            printf("Grade : E\n");
    }

    return 0;
}