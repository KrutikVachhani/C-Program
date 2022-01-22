#include<stdio.h>
void main()
{
    int n;
    printf("enter day number\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Sunday\n");
        break;
    
    case 2:
        printf("Monday\n");
        break;
    
    case 3:
        printf("Tuesday\n");
        break;

    case 4:
        printf("Wendsday\n");
        break;

    case 5:
        printf("Thursday\n");
        break;

    case 6:
        printf("Friday\n");
        break;

    case 7:
        printf("Saturday\n");
        break;
    
    default:
        printf("invalid input");
        break;
    }
}