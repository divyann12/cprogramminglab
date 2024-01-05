#include<stdio.h>
int main(){
    int i=0;
    int marks[5];//declaration of array
    marks[0]=80;//initialization of array
    marks[1]=60;
    marks[2]=40;
    marks[3]=20;
    marks[4]=0;
    //tranversal of array
    for(i=0;i<5;i++){
        printf("\n mark[%d] %d",i,&marks[i]); }
        //end of loop
        return 1;


}