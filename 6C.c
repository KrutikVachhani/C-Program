#include<stdio.h>
void main()
{
    int a,b;
    printf("enter number a\n");
    scanf("%d",&a);
    printf("enter number b\n");
    scanf("%d",&b);
    if(a>b)
    {
        printf("a is larger than b");
    }
    else
    {
        printf("b is larger than a");
    }
}