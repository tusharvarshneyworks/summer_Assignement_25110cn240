#include<stdio.h>

int main()
{
    int n,choice,id,found=0;
    int itemId[100],quantity[100];
    char itemName[100][30];
    float price[100];

    printf("Enter number of items: ");
    scanf("%d",&n);

    printf("\nEnter Item Details:\n");

    for(int i=0;i<n;i++)
    {
        printf("\nItem %d\n",i+1);

        printf("Enter Item ID: ");
        scanf("%d",&itemId[i]);

        printf("Enter Item Name: ");
        scanf("%s",itemName[i]);

        printf("Enter Price: ");
        scanf("%f",&price[i]);

        printf("Enter Quantity: ");
        scanf("%d",&quantity[i]);
    }

    do
    {
        printf("\n========== INVENTORY MANAGEMENT SYSTEM ==========\n");
        printf("1. Display All Items\n");
        printf("2. Search Item\n");
        printf("3. Update Quantity\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("\nID\tName\tPrice\tQuantity\n");

                for(int i=0;i<n;i++)
                {
                    printf("%d\t%s\t%.2f\t%d\n",
                    itemId[i],itemName[i],price[i],quantity[i]);
                }

                break;

            case 2:

                printf("Enter Item ID: ");
                scanf("%d",&id);

                found=0;

                for(int i=0;i<n;i++)
                {
                    if(itemId[i]==id)
                    {
                        printf("\nItem Found\n");
                        printf("ID : %d\n",itemId[i]);
                        printf("Name : %s\n",itemName[i]);
                        printf("Price : %.2f\n",price[i]);
                        printf("Quantity : %d\n",quantity[i]);

                        found=1;
                        break;
                    }
                }

                if(found==0)
                {
                    printf("Item Not Found\n");
                }

                break;

            case 3:

                printf("Enter Item ID: ");
                scanf("%d",&id);

                found=0;

                for(int i=0;i<n;i++)
                {
                    if(itemId[i]==id)
                    {
                        printf("Enter New Quantity: ");
                        scanf("%d",&quantity[i]);

                        printf("Quantity Updated Successfully\n");

                        found=1;
                        break;
                    }
                }

                if(found==0)
                {
                    printf("Item Not Found\n");
                }

                break;

            case 4:

                printf("Thank You For Using Inventory Management System\n");
                break;

            default:

                printf("Invalid Choice\n");
        }

    }while(choice!=4);

    return 0;
}