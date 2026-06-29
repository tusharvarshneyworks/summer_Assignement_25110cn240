#include<stdio.h>

int main()
{
    int seats=50;
    int choice,tickets;
    float price,total;

    do
    {
        printf("\n========== TICKET BOOKING SYSTEM ==========\n");
        printf("1. View Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("Available Seats = %d\n",seats);
                break;

            case 2:

                if(seats==0)
                {
                    printf("Sorry! No seats available.\n");
                    break;
                }

                printf("Enter number of tickets: ");
                scanf("%d",&tickets);

                if(tickets<=0)
                {
                    printf("Invalid Number of Tickets\n");
                }
                else if(tickets>seats)
                {
                    printf("Only %d seats are available.\n",seats);
                }
                else
                {
                    printf("Enter Ticket Price: ");
                    scanf("%f",&price);

                    total=tickets*price;
                    seats=seats-tickets;

                    printf("\nBooking Successful\n");
                    printf("Tickets Booked : %d\n",tickets);
                    printf("Total Amount : %.2f\n",total);
                    printf("Remaining Seats : %d\n",seats);
                }

                break;

            case 3:

                printf("Thank You For Using Ticket Booking System\n");
                break;

            default:

                printf("Invalid Choice\n");
        }

    }while(choice!=3);

    return 0;
}