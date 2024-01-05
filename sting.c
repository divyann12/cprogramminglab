 #include<stdio.h>
 #include<string.h>
 void main(){

    char a[100];
    printf("Enter the string");
  scanf ("%s",a);
  printf("the string is %s",a);
  printf("enter the string");
  gets(a);
  printf("the string is %s",a);
  printf("enter the string");
  scanf("%[^\n]s",a);
  printf("the string is %s",a);
 }