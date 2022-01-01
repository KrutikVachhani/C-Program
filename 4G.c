#include<stdio.h>
void main()
{
    int Days,Years,Weeks;
    printf("enter days=");
    scanf("%d",&Days);
    Years=Days/365;
    printf("Years=%d\n",Years);
    Weeks=((Days%365)/7);
    printf("Weeks=%d\n",Weeks);
    Days=Days-((Years*365)+(Weeks*7));
    printf("Days=%d\n",Days);    
}
