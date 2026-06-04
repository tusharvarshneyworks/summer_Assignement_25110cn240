#include <stdio.h>

int main()
{
    int up, low, d, a, arm;
    printf("Enter the upperand and lowerand:\n");
    scanf("%d %d",&up,&low);
    while(up<0||low<0||low>up){
        printf("INVALID INPUT\nupperand and lowerand should be natuaral number and,\nupperand is should be greater than lowerand\n");
        printf("Enter the upperand and lowerand:\n");
        scanf("%d %d",&up,&low);
    }
    printf("The Armstrong numbers in the range(%d,%d) is\n",low,up);
    for(int i=low+1; i<up; i++){
        arm=0;
        a=i;
        while(a>0){
        d=a%10;
        arm=arm+d*d*d;
        a=a/10;
    }
    if (arm==i){
        printf("%d  ",i);
    }
    }
    return 0;
}