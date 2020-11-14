#include <conio.h>
#include <stdio.h>

void main()
{
    int m,d;
    char zodiac;
    printf("enter month(1-12):");
    scanf("%d",&m);
    printf("enter date(1-31):");
    scanf("%d",&d);
    switch(m)
    {
    case(12):
        if (d<22)
        printf("sagittarius");
        else
        printf("capricon");
        break;
    case(1):
        if (d<20)
        printf("capricon");
        else
        printf("aquarius");
        break;
    case(2):
        if (d<19)
        printf("Aquarius");
        else
        printf("pisces");
        break;
    case(3):
        if (d<21)
        printf("Pisces");
        else
        printf("aries");
        break;
    case(4):
        if (d<20)
        printf("Aries");
        else
        printf("taurus");
        break;
    case(5):
        if (d<21)
        printf("Taurus");
        else
        printf("gemini");
        break;
    case(6):
        if (d<21)
        printf("Gemini");
        else
        printf("cancer");
        break;
    case(7):
        if (d<23)
        printf("Cancer");
        else
        printf("leo");
        break;
    case(8):
        if (d<23)
        printf("Leo");
        else
        printf("virgo");
        break;
    case(9):
        if (d<23)
        printf("Virgo");
        else
        printf("libra");
        break;
    case(10):
         if (d<23)
        printf("Libra");
        else
        printf("scorpio");
        break;
    case(11):
        if (d<22)
        printf("scorpio");
        else
        printf("sagittarius");
        break;
    default:
        printf("wrong date or month");
        }
    getch();
}
