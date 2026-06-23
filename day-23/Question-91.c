#include<stdio.h>

int main()
{
    char str1[100],str2[100],temp;
    int len1=0,len2=0,flag=1;

    printf("Enter first string: ");
    scanf("%s",str1);

    printf("Enter second string: ");
    scanf("%s",str2);

    while(str1[len1]!='\0'){
        len1++;
    }

    while(str2[len2]!='\0'){
        len2++;
    }

    if(len1!=len2){
        flag=0;
    }else{

        for(int i=0;i<len1-1;i++){
            for(int j=i+1;j<len1;j++){
                if(str1[i]>str1[j]){
                    temp=str1[i];
                    str1[i]=str1[j];
                    str1[j]=temp;
                }
            }
        }

        for(int i=0;i<len2-1;i++){
            for(int j=i+1;j<len2;j++){
                if(str2[i]>str2[j]){
                    temp=str2[i];
                    str2[i]=str2[j];
                    str2[j]=temp;
                }
            }
        }

        for(int i=0;i<len1;i++){
            if(str1[i]!=str2[i]){
                flag=0;
                break;
            }
        }
    }

    if(flag==1){
        printf("Anagram Strings");
    }else{
        printf("Not Anagram Strings");
    }

    return 0;
}