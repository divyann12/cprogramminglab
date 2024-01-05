#include<stdio.h>
#include"sample1.c"
void main(){
    int a,b,c;
    clrscr();
    printf("enter the number");
    scanf("%d%d",&a,&b);
    c=sub(a,b);
    printf("sum=%d",c)

    int add(int x,int y)
    {
        int z=x+y;
        return z;
    }
    int sub(int x,int y)
    {
        int z=x-y;
        return z;
    }
}