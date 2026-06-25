#include<stdio.h>

int main()
{
    char str[200],word[100],longest[100];
    int i=0,j=0,max=0,len=0;

    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);

    while(str[i]!='\0'){

        if(str[i]!=' ' && str[i]!='\n'){
            word[j]=str[i];
            j++;
        }else{

            word[j]='\0';

            if(j>max){
                max=j;

                for(int k=0;k<=j;k++){
                    longest[k]=word[k];
                }
            }

            j=0;
        }

        i++;
    }

    len=0;
    while(longest[len]!='\0'){
        len++;
    }

    printf("Longest word = %s",longest);

    return 0;
}