#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    int n,p,r;
    printf("enter n,p:\n");
    scanf("%d%d",&n,&p);
    r=pow(n,p);
    printf("power=%d",r);
    getch();
}
