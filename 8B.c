#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter a\n");
	scanf("%d",&a);
	printf("enter b\n");
	scanf("%d",&b);
	printf("enter c\n");
	scanf("%d",&c);
	(a>b)?((a>c)?printf("a is largest\n"):printf("c is largest\n")):((b>c)?printf("b is largest\n"):printf("c is largest\n"));

}