#include<stdio.h>
void main(){
    int age;
    printf("your age\n");
    scanf("%d",&age);
    if(age>=18 && age<=50)
     
    {
       if(age>=18 && age<=30)
       { 
        printf("elegible for the job of grade A");
       }
       else
       {

       printf("elegible for the job of grade B");
       }
    }
       else
       {
        printf("not elegible for the job");
       }

}