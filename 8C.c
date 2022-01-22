#include<stdio.h>
void main()
{
    int a,b,c,x;
    printf("enter any three number\n");
    scanf("%d%d%d",&a,&b,&c);
    x=(a>b)?(a*c):(b*c);
    printf("x=%d",x);
}