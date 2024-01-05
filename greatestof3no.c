#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("the greatest value is=%d\n",a);
        else
        printf("the gratest value is=%d\n",c);
    }
    else
    {
        if(b>c)
        printf("the greatest number is =%d",b);
    else
        printf("the greatest number is=%d",c);

    }
}