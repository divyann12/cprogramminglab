#include<stdio.h>
 #include<math.h>
 void main(){
    int choice;
    printf("Enter 1 to find area of Triangle 2 for finding area of Square 3 for finding area of Circle 4 for finding area of Rectangle");
scanf("%d",&choice);
switch(choice){
    case 1:{
        int a,b,c;
        float s,area;
        printf("enter sides if triangle");
        scanf("%d%d%d",&a,&b,&c);
        s=(float)(a+b+c)/2;
        area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
        printf("Area of triangle is=%f",area);
        break;
        }
        case 2: {
            float side,area;
            printf("enter sides of square");
            scanf("%f",&side);
            area=(float)side*side;
            printf("area of square is =%f",area);
            break;
        }
        case 3: {
            float radius,area;
            printf("enter the radius of circle");
            scanf("%f",&radius);
            area=(float)3.14*radius*radius;
            printf("area of circle=%f",area);
            break;
        }
        case 4: {
            float len,breadth,area;
            printf("enter length and breadth of rectangle");
            scanf("%f%f",&len,&breadth);
            area=(float)len*breadth;
            printf("area of rectangle is =%f",area);
            break;
            default: {
                printf("invalid choice");
                break;
            }
        }

    }
    
}

