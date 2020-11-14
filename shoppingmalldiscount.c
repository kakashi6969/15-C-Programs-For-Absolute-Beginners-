#include <stdio.h>
#include <conio.h>
void main()
{
    float amount,bill,finalbill;
    printf("enter amount:");
    scanf("%f",&amount);
    if (amount>5000)
        bill=(amount/100)*10;
    else
        bill=(amount/100)*5;

    finalbill=amount-bill;
    printf("bill(after discount)=%f",finalbill);
    getch();
}
