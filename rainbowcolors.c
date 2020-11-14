#include<stdio.h>
#include<conio.h>

void main()
{
    char x;
    printf("enter a letter from vibgyor to get corresponding colour:");
    scanf("%c",&x);
    switch(x)
    {
    case 'v':
        printf("violet");
        break;
    case 'i':
        printf("indigo");
        break;
    case 'b':
        printf("blue");
        break;
    case 'g':
        printf("green");
        break;
    case 'y':
        printf("yellow");
        break;
    case 'o':
        printf("orange");
        break;
    case 'r':
        printf("rainbow");
        break;
    default:
        printf("wrong input");
        break;
    }
getch();
}
