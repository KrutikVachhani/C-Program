#include<stdio.h>
void main()
{
    int n;
    printf("enter any number\n");
    scanf("%d",&n);
    n=n%10;
    if(n%2==0)
    {
        printf("last digit is even");
    }
    else if(n%2!=0)
    {
        printf("last digit is odd");
    }
}