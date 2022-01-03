#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,r1,r2,real,img;
    printf("enter value of coeficient of a");
    scanf("%f",&a);
    printf("enter value of coeficient of b");
    scanf("%f",&b);
    printf("enter value of coeficient of c");
    scanf("%f",&c);
    d=((b*b)-(4*a*c));
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("r1=%f and r2=%f\n",r1,r2);
    }
    if(d==0)
    {
        r1=r2=-b/(2*a);
        printf("r1=r2=%f\n",r1,r2);
    }
    if(d>0)
    {
        real=-b/(2*a);
        img=sqrt(-d)/(2*a);
        printf("r1=%f+%fi and r2=%f-%fi\n",real,img);
    }
}