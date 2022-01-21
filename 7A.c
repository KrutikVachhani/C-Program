#include<stdio.h>   
void main() 
{  
    int year;  
    printf("Enter a year\n");  
    scanf("%d",&year);  
    if((year%4==0) && ((year%400==0) || (year%100!=0)))  
    {  
        printf("leap year");  
    }
    else 
    {  
        printf("not leap year");  
    }    
}  