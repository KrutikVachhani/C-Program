#include<stdio.h>
void main()
{
    int sec,H,M,S,RS;
    printf("enter seconds");
    scanf("%d",&sec);
    H=sec/3600;
    printf("HH=%d\n",H);
    S=sec-(3600*H);
    printf("SS=%d\n",S);
    M=S/60;
    printf("MM=%d\n",M);
    RS=S%60;
    printf("RS=%d\n",RS);
}