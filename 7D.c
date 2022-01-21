#include<stdio.h>
void main()
{
    int a,b,c,A,S,M,D;
    printf("enter any two number\n");
    scanf("%d%d",&a,&b);
    printf("press 1 for Addition\n");
    printf("press 2 for Substraction\n");
    printf("press 3 for Multiplication\n");
    printf("press 4 for Division\n");
    scanf("%d",&c);
    if(c==1)
    {
        A=a+b;
        printf("%d",A);
    }
    else if(c==2)
    {
        S=a-b;
        printf("%d",S);
    }
    else if(c==3)
    {
        M=a*b;
        printf("%d",M);
    }
    else if(c==4)
    {
        D=a/b;
        printf("%d",D);
    }
    else
    {
        printf("invalid input")
    }
}