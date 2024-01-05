#include<stdio.h>
void main(){
    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[n],sum=0,sum1=0;
    printf("enter array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        sum=sum+a[i];
        else
        sum1=sum1+a[i];
    }
    printf("sum of even array elements=%d\n",sum);
    printf("sum of odd array elements=%d",sum1);
}