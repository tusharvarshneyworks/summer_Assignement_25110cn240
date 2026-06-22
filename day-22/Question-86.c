#include<stdio.h>

int main()
{
    char str[100];
    int words=1,i=0;

    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);

    while(str[i]!='\0'){

        if(str[i]==' '){
            words++;
        }

        i++;
    }

    printf("Number of words = %d",words);

    return 0;
}