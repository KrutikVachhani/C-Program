#include<stdio.h>
void main()
{
    int a,b,n;
    printf("1. addition\n");
    printf("2. subtraction\n");
    printf("3. multiplication\n");
    printf("4. division\n");
    scanf("%d",&n);
    printf("enter number a\n");
    scanf("%d",&a);
    printf("enter nummber b\n");
    scanf("%d",&b);
    if (n==1)
    {
        printf("%d+%d=%d\n",a,b,a+b);
    }
    if (n==2)
    {
        printf("%d-%d=%d\n",a,b,a-b);
    }
    if (n==3)
    {
        printf("%d*%d=%d\n",a,b,a*b);
    }
    if (n==4)
    {
        printf("%d/%d=%d\n",a,b,a/b);
    }
}