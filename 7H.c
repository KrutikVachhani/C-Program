#include<stdio.h>
void main()
{
    float bs,hra,da,gs;
    printf("enter basic salary\n");
    scanf("%f",&bs);
    if(bs>=10000 && bs<20000)
    {
        hra=bs*0.20;
        printf("%f\n",hra);
        da=bs*0.80;
        printf("%f\n",da);
        gs=bs+hra+da;
        printf("%f",gs);
    }
    
    else if(bs>=20000 && bs<30000)
    {
        hra=bs*0.25;
        printf("%f\n",hra);
        da=bs*0.90;
        printf("%f\n",da);
        gs=bs+hra+da;
        printf("%f",gs);           
    }
    
    else if(bs>30000)
    {
        hra=bs*0.30;
        printf("%f",hra);
        da=bs*0.95;
        printf("%f",da);
        gs=bs+hra+da;
        printf("%f",gs);
    }
    else
    {
        printf("invalid input");
    }
}