#include<stdio.h>

int main()
{
    int n,choice,roll,found=0;
    int rollNo[100];
    char name[100][30];
    float marks[100];

    printf("Enter number of students: ");
    scanf("%d",&n);

    printf("\nEnter Student Details:\n");

    for(int i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Enter Roll Number: ");
        scanf("%d",&rollNo[i]);

        printf("Enter Name: ");
        scanf("%s",name[i]);

        printf("Enter Marks: ");
        scanf("%f",&marks[i]);
    }

    do
    {
        printf("\n========== STUDENT RECORD SYSTEM ==========\n");
        printf("1. Display All Records\n");
        printf("2. Search Student\n");
        printf("3. Update Marks\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("\nRoll\tName\tMarks\n");

                for(int i=0;i<n;i++)
                {
                    printf("%d\t%s\t%.2f\n",
                    rollNo[i],name[i],marks[i]);
                }

                break;

            case 2:

                printf("Enter Roll Number: ");
                scanf("%d",&roll);

                found=0;

                for(int i=0;i<n;i++)
                {
                    if(rollNo[i]==roll)
                    {
                        printf("\nStudent Found\n");
                        printf("Roll Number : %d\n",rollNo[i]);
                        printf("Name : %s\n",name[i]);
                        printf("Marks : %.2f\n",marks[i]);

                        found=1;
                        break;
                    }
                }

                if(found==0)
                {
                    printf("Student Not Found\n");
                }

                break;

            case 3:

                printf("Enter Roll Number: ");
                scanf("%d",&roll);

                found=0;

                for(int i=0;i<n;i++)
                {
                    if(rollNo[i]==roll)
                    {
                        printf("Enter New Marks: ");
                        scanf("%f",&marks[i]);

                        printf("Marks Updated Successfully\n");

                        found=1;
                        break;
                    }
                }

                if(found==0)
                {
                    printf("Student Not Found\n");
                }

                break;

            case 4:

                printf("Thank You!\n");
                break;

            default:

                printf("Invalid Choice\n");
        }

    }while(choice!=4);

    return 0;
}