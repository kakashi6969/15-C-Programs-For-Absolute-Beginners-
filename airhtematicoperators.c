#include <conio.h>
#include <stdio.h>

void main()
{
    int x,y,z;
    float res;
    printf("enter two numbers:\n");
    scanf("%d%d",&x,&y);
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("5.remainder\n");
    printf("select operation:");
   scanf("%d",&z);
    switch(z){
    case 1:
        res=x+y;
        break;
    case 2:
        res=x-y;
        break;
    case 3:
        res=x*y;
        break;
    case 4:
        res=x/y;
        break;
    case 5:
        res=x%y;
        break;
    default:
        printf("invalid input");
        break;
    }
    printf("result=%f",res);
    getch();
}
