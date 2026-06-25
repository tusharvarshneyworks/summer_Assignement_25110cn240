#include<stdio.h>

int main()
{
    char str1[100],str2[100];
    int len1=0,len2=0,flag=0;

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
        printf("Not Rotation Strings");
    }else{

        for(int i=0;i<len1;i++){

            flag=1;

            for(int j=0;j<len1;j++){

                if(str1[(i+j)%len1]!=str2[j]){
                    flag=0;
                    break;
                }
            }

            if(flag==1){
                break;
            }
        }

        if(flag==1){
            printf("Rotation Strings");
        }else{
            printf("Not Rotation Strings");
        }
    }

    return 0;
}