#include<stdio.h>
void main(){
    int arr[10]={2,4,1,7,5,9,3,6,8,10};
    int ele,found=0,i,num;
    printf("enter the no.of elements:");
    scanf("%d",&num);
    printf("enter the elements:");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search:");
    scanf("%d",&ele);
    for(i=0;i<10;i++)
    {
        if(arr[i]==ele)
        {
            printf("element foundat the index %d\n",ele);
            found=1;
            break;
        }
    }
    if(!found){
        printf("element not found in the array.");
    }
}