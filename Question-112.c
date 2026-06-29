#include<stdio.h>

int main()
{
    int n,choice,id,found=0;

    printf("Enter number of contacts: ");
    scanf("%d",&n);

    int contactId[n];
    char name[n][30];
    char phone[n][15];

    printf("\nEnter Contact Details:\n");

    for(int i=0;i<n;i++)
    {
        printf("\nContact %d\n",i+1);

        printf("Enter Contact ID: ");
        scanf("%d",&contactId[i]);

        printf("Enter Name: ");
        scanf("%s",name[i]);

        printf("Enter Phone Number: ");
        scanf("%s",phone[i]);
    }

    do
    {
        printf("\n========== CONTACT MANAGEMENT SYSTEM ==========\n");
        printf("1. Display All Contacts\n");
        printf("2. Search Contact\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("\nID\tName\tPhone Number\n");

                for(int i=0;i<n;i++)
                {
                    printf("%d\t%s\t%s\n",
                    contactId[i],name[i],phone[i]);
                }

                break;

            case 2:

                printf("Enter Contact ID: ");
                scanf("%d",&id);

                found=0;

                for(int i=0;i<n;i++)
                {
                    if(contactId[i]==id)
                    {
                        printf("\nContact Found\n");
                        printf("ID : %d\n",contactId[i]);
                        printf("Name : %s\n",name[i]);
                        printf("Phone Number : %s\n",phone[i]);

                        found=1;
                        break;
                    }
                }

                if(found==0)
                {
                    printf("Contact Not Found\n");
                }

                break;

            case 3:

                printf("Thank You For Using Contact Management System\n");
                break;

            default:

                printf("Invalid Choice\n");
        }

    }while(choice!=3);

    return 0;
}