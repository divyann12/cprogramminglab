#include<stdio.h>
void fun();
void main()
{
    int a=30;
{
    int a=40;
    printf("%d\n",a);
} 
fun();
fun();
printf("hello wellcome to collage");
fun();
}

void fun()
{
    static int a=30,b;
    b=++a;
    printf("coming from fun b =%d\n",b);
}   