#include<stdio.h>
void main()
{
    int c,f;
    printf("enter value in fahrenheit\n");
    scanf("%d",&f);
    c=(((f-32)*5)/9);
    printf("Temp in C=%d",c);
}