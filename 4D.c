#include<stdio.h>
void main()
{
    int phy,chem,maths,web,english;
    float pr,sum;
    printf("enter phy marks\n");
    scanf("%d",&phy);
    printf("enter chem marks\n");
    scanf("%d",&chem);
    printf("enter maths marks\n");
    scanf("%d",&maths);
    printf("enter web marks\n");
    scanf("%d",&web);
    printf("enter english marks\n");
    scanf("%d",&english);
    sum=phy+chem+maths+web+english;
    pr=(sum/500)*100;
    printf("%d",pr);
}