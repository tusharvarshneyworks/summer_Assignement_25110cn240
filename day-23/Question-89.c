#include<stdio.h>

int main()
{
    char str[100];
    int count,flag=0;

    printf("Enter a string: ");
    scanf("%s",str);

    for(int i=0;str[i]!='\0';i++){

        count=0;

        for(int j=0;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }
        }

        if(count==1){
            printf("First non-repeating character = %c",str[i]);
            flag=1;
            break;
        }
    }

    if(flag==0){
        printf("No non-repeating character found");
    }

    return 0;
}