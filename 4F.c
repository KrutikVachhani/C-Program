#include<stdio.h>
void main()
{
    float km,m,ft,inch,cm;
    printf("enter km=");
    scanf("%f",&km);
    m=km*1000;
    printf("m=%f\n",m);
    ft=m*3.28;
    printf("ft=%f\n",ft);
    inch=ft*12;
    printf("inch=%f\n",inch);
    cm=inch*2.54;
    printf("cm=%f\n",cm);
}