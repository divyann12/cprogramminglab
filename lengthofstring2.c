#include<stdio.h>
void main(){
   char a[100];
   printf("enter the string:");
   scanf("%[^\n]s",a);
   int i,len=0;
   for(i=0;;i++)
   {
    if(a[i]=='\0')
    break;
    else 
    len++;
   } 
   printf("enter the length of string is =%d\n",len);
   char b[len];
   for(i=0;i<len;i++)
   {
    b[i]=a[i];
   }
   printf("the copied string %s",b);
   int flag=0;
   for(i=0;i<len;i++)
   {
      int m=a[i];
      int n=b[i];
      if(m!=n)
      {
         flag=1;
         break;
      }
   }
   if(flag==0)
   printf("the given string is equal");
   else
   printf("the given string is not equal");
}
