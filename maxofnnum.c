#include<stdio.h>
void main(){
    int number,sum=0,digit;
    printf("enter the number=");
    scanf("%d",&number);
    while(number!=0)
    {
        digit=number%10;
        sum+=digit;
        number/=10;
        printf("number of digits are %d\n",sum);
    }
}