#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,r1,r2,rp,ip;
    printf("enter value of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("%f%f",r1,r2);
    }
    else if(d==0)
    {
        r1=r2=-b/(2*a);
        printf("r1=r2=%f",r2);
    }
    else
    {
        rp=-b/(2*a);
        ip=sqrt(-d)/(2*a);
        printf("%f%f",rp,ip);
    }
}