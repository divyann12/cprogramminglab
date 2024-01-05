#include<stdio.h>
int main(){
    int number,sum = 0,digit,cube;
    printf("enter a number:");
    scanf("%d",&number);
    while(number !=0){
        digit=number % 10;
        cube=digit*digit*digit;
        sum +=cube;
        number /=10;
    }
    printf("sum of digits: %d\n",sum);
    return 0;
}