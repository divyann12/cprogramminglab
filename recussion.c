#include<stdio.h>
void main(){
    int num,fact1;
    printf("enter the num:");
    scanf("%d",&num);
    fact1=fact(num);
    printf("factorial of the num:%d",fact1);
}                               
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return (n*n)+fact(n-1);
}