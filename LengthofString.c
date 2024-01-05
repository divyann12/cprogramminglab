#include<stdio.h>
void main(){
   char a[100];
   printf("enter the string");
   scanf("%[^\n]s",a);
   int i,len=0;
   for(i=0;a[i]=='\0';i++)
   {
     len++;
   } 
   printf("enter the length of string is =%d",len);
}