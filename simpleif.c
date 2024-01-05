#include<stdio.h>
void main(){
    int mark;
    printf("enter the marks");
    scanf("%d",&mark);
        char ch;
        printf("enter handwriting is good or bad");
        scanf("%c%c",&ch,&ch);
        if(ch=='y'||ch=='Y')
        {
            mark=mark+10;
        }
        printf("your mark is %d",mark);
}