#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter number a");
    scanf("%d\n",&a);
    printf("enter number b");
    scanf("%d\n",&b);
    printf("enter number c");
    scanf("%d\n",&c);
    if(a>b && a>c)
    {
        printf("a is larger than b and c");
    }
    if(b>a && b>c)
    {
        printf("b is larger than a and c");
    }
    if(c>a && c>b)
    {
        printf("c is larger than a and b");
    }
}