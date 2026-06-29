#include<stdio.h>

int main()
{
    char str[100];
    int choice,length=0;
    char ch;

    printf("Enter a string: ");
    scanf("%s",str);

    do
    {
        printf("\n========== STRING OPERATIONS ==========\n");
        printf("1. Display String\n");
        printf("2. Find Length\n");
        printf("3. Reverse String\n");
        printf("4. Convert to Uppercase\n");
        printf("5. Count Vowels\n");
        printf("6. Search Character\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("String = %s\n",str);
                break;

            case 2:

                length=0;

                while(str[length]!='\0')
                {
                    length++;
                }

                printf("Length = %d\n",length);
                break;

            case 3:

                length=0;

                while(str[length]!='\0')
                {
                    length++;
                }

                printf("Reversed String = ");

                for(int i=length-1;i>=0;i--)
                {
                    printf("%c",str[i]);
                }

                printf("\n");
                break;

            case 4:

                for(int i=0;str[i]!='\0';i++)
                {
                    if(str[i]>='a' && str[i]<='z')
                    {
                        str[i]=str[i]-32;
                    }
                }

                printf("Uppercase String = %s\n",str);
                break;

            case 5:
            {
                int vowels=0;

                for(int i=0;str[i]!='\0';i++)
                {
                    if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
                       str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                    {
                        vowels++;
                    }
                }

                printf("Number of Vowels = %d\n",vowels);
                break;
            }

            case 6:
            {
                int found=0;

                printf("Enter character to search: ");
                scanf(" %c",&ch);

                for(int i=0;str[i]!='\0';i++)
                {
                    if(str[i]==ch)
                    {
                        printf("Character found at position %d\n",i+1);
                        found=1;
                        break;
                    }
                }

                if(found==0)
                {
                    printf("Character not found\n");
                }

                break;
            }

            case 7:

                printf("Thank You!\n");
                break;

            default:

                printf("Invalid Choice\n");
        }

    }while(choice!=7);

    return 0;
}