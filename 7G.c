#include<stdio.h>
void main()
{
    int s1,s2,s3,s4,s5,total;
    float pr;
    printf("enter marks of s1,s2,s3,s4,s5\n");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    pr=total/5;
    if(pr>=70)
    {
        printf("Distinction\n");
    }
    else if(pr>=60 && pr<70)
    {
        printf("First Class\n");
    }
    else if(pr>=45 && pr<60)
    {
        printf("Second Class\n");
    }
    else if(pr>=35 && pr<45)
    {
        printf("Pass Class");
    }
    else
    {
        printf("Better luck next time\n");
    }
}