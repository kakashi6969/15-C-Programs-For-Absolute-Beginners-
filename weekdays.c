#include<stdio.h>
#include<conio.h>

void main()
{
    int x;
    printf("enter a number between 1 and 7 to get the corresponding weekday:");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("sunday");
        break;
    case 2:
        printf("monday");
        break;
    case 3:
        printf("tuesday");
        break;
    case 4:
        printf("wednesday");
        break;
    case 5:
        printf("thursday");
        break;
    case 6:
        printf("friday");
        break;
    case 7:
        printf("saturday");
        break;
    default:
        printf("wrong input");
        break;
    }
getch();
}
