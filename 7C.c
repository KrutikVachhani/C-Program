#include<stdio.h>
void main()
{
    char ch,A,Z,a,z;
    printf("enter any character\n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("character is capital");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("character is small");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("character is digit");
    }
    else
    {
        printf("character is special");
    }
}