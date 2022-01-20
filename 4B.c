#include<stdio.h>
void main()
{
    int c,f;
    printf("enter value of temperature in celsius\n");
    scanf("%d",&c);
    f=((c*9)/5)+32;
    printf("Temp in F=%d",f);
}