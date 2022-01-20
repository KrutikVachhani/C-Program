#include<stdio.h>
void main()
{
    int t,d,u,a;
    printf("enter value of u\n");
    scanf("%d",&u);
    printf("enter value of time\n");
    scanf("%d",&t);
    printf("enter value of acceleration\n");
    scanf("%d",&a);
    d=(u*t)+(a*(t*t));
    printf("Distance=%d",d);
}