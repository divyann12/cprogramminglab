#include<stdio.h>
void main()
{
    int a[3][3],i,j,sR=0,sC=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("\nenter the element:a[%d][%d]",i,j);
        scanf("%d",&a[i][j]);
    }
    //to calc sum of rows and columns
    for(i=0;i<3;i++)
    {
        sR=sC=0;
        for(j=0;j<3;j++)
        {
            sR=sR+a[i][j];
            sC=sC+a[j][i];
        }
    printf("sR=%d and sC=%d",sR,sC);
    }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d",a[i][j]);
            }
        }
}