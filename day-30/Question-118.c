#include<stdio.h>

int main()
{
    int n,choice,id,found=0;
    int bookId[100],quantity[100];
    char title[100][50];
    char author[100][30];

    printf("Enter number of books: ");
    scanf("%d",&n);

    printf("\nEnter Book Details:\n");

    for(int i=0;i<n;i++)
    {
        printf("\nBook %d\n",i+1);

        printf("Enter Book ID: ");
        scanf("%d",&bookId[i]);

        printf("Enter Book Title: ");
        scanf("%s",title[i]);

        printf("Enter Author Name: ");
        scanf("%s",author[i]);

        printf("Enter Quantity: ");
        scanf("%d",&quantity[i]);
    }

    do
    {
        printf("\n========== MINI LIBRARY SYSTEM ==========\n");
        printf("1. Display All Books\n");
        printf("2. Search Book\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("\nID\tTitle\tAuthor\tQuantity\n");

                for(int i=0;i<n;i++)
                {
                    printf("%d\t%s\t%s\t%d\n",
                    bookId[i],title[i],author[i],quantity[i]);
                }

                break;

            case 2:

                printf("Enter Book ID: ");
                scanf("%d",&id);

                found=0;

                for(int i=0;i<n;i++)
                {
                    if(bookId[i]==id)
                    {
                        printf("\nBook Found\n");
                        printf("ID : %d\n",bookId[i]);
                        printf("Title : %s\n",title[i]);
                        printf("Author : %s\n",author[i]);
                        printf("Quantity : %d\n",quantity[i]);

                        found=1;
                        break;
                    }
                }

                if(found==0)
                {
                    printf("Book Not Found\n");
                }

                break;

            case 3:

                printf("Enter Book ID: ");
                scanf("%d",&id);

                found=0;

                for(int i=0;i<n;i++)
                {
                    if(bookId[i]==id)
                    {
                        if(quantity[i]>0)
                        {
                            quantity[i]--;
                            printf("Book Issued Successfully\n");
                            printf("Remaining Quantity = %d\n",quantity[i]);
                        }
                        else
                        {
                            printf("Book Not Available\n");
                        }

                        found=1;
                        break;
                    }
                }

                if(found==0)
                {
                    printf("Book Not Found\n");
                }

                break;

            case 4:

                printf("Enter Book ID: ");
                scanf("%d",&id);

                found=0;

                for(int i=0;i<n;i++)
                {
                    if(bookId[i]==id)
                    {
                        quantity[i]++;
                        printf("Book Returned Successfully\n");
                        printf("Available Quantity = %d\n",quantity[i]);

                        found=1;
                        break;
                    }
                }

                if(found==0)
                {
                    printf("Book Not Found\n");
                }

                break;

            case 5:

                printf("Thank You For Using Mini Library System\n");
                break;

            default:

                printf("Invalid Choice\n");
        }

    }while(choice!=5);

    return 0;
}