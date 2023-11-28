#include<stdio.h>
void main(){
    int mark;
    printf("Enter the mark");
    scanf("%d",&mark);
    char ch;
    printf("handwriting is good or bad");
    scanf("%c%c",&ch,&ch);
    if (ch=='y'||ch=='Y')
    {
        mark=mark+2;
    }
    printf("your mark is %d",mark);
}