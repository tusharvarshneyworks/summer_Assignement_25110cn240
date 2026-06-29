#include<stdio.h>

int main()
{
    int n;

    printf("Enter number of books: ");
    scanf("%d",&n);

    int id[n];
    char title[n][50];
    char author[n][30];
    int quantity[n];

    printf("\nEnter Book Details:\n");

    for(int i=0;i<n;i++)
    {
        printf("\nBook %d\n",i+1);

        printf("Enter Book ID: ");
        scanf("%d",&id[i]);

        printf("Enter Book Title: ");
        scanf("%s",title[i]);

        printf("Enter Author Name: ");
        scanf("%s",author[i]);

        printf("Enter Quantity: ");
        scanf("%d",&quantity[i]);
    }

    printf("\n========== LIBRARY RECORD ==========\n");

    printf("\nID\tTitle\tAuthor\tQuantity\n");

    for(int i=0;i<n;i++)
    {
        printf("%d\t%s\t%s\t%d\n",
        id[i],title[i],author[i],quantity[i]);
    }

    return 0;
}