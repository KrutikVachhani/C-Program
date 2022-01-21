# include<stdio.h>
void main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
    printf("enter value of n1,n2,n3,n4,n5,n6,n7,n8,n9,n10\n");
    scanf("%d%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
    if(n1>n2 && n1>n3 && n1>n4 && n1>n5 && n1>n6 && n1>n7 && n1>n8 && n1>n9 && n1>n10)
        printf("n1 is maximum");
    else if(n2>n3 && n2>n4 && n2>n5 && n2>n6 && n2>n7 && n2>n8 && n2>n9 && n2>n10)
        printf("n2 is maximun");
    else if(n3>n4 && n3>n5 && n3>n6 && n3>n7 && n3>n8 && n3>n9 && n3>n10)
        printf("n3 is maximum");
    else if(n4>n5 && n4>n6 && n4>n7 && n4>n8 && n4>n9 && n4>n10)
        printf("n4 is maximum");
    else if(n5>n6 && n5>n7 && n5>n8 && n5>n9 && n5>n10)
        printf("n5 is maximum");
    else if(n6>n7 && n6>n8 && n6>n9 && n6>n10)
        printf("n6 is maximum");
    else if(n7>n8 && n7>n9 && n7>n10)
        printf("n7 is maximum");
    else if(n8>n9 && n8>n10)
        printf("n8 is maximum");
    else if(n9>n10)
        printf("n9 is maximum");
    else
        printf("n10 is maximum");
    printf("\n");
    if(n1<n2 && n1<n3 && n1<n4 && n1<n5 && n1<n6 && n1<n7 && n1<n8 && n1<n9 && n1<n10)
        printf("n1 is minimum");
    else if(n2<n3 && n2<n4 && n2<n5 && n2<n6 && n2<n7 && n2<n8 && n2<n9 && n2<n10)
        printf("n2 is minimum");
    else if(n3<n4 && n3<n5 && n3<n6 && n3<n7 && n3<n8 && n3<n9 && n3<n10)
        printf("n3 is minimum");
    else if(n4<n5 && n4<n6 && n4<n7 && n4<n8 && n4<n9 && n4<n10)
        printf("n4 is minimum");
    else if(n5<n6 && n5<n7 && n5<n8 && n5<n9 && n5<n10)
        printf("n5 is minimum");
    else if(n6<n7 && n6<n8 && n6<n9 && n6>n10)
        printf("n6 is minimum");
    else if(n7<n8 && n7<n9 && n7<n10)
        printf("n7 is minimum");
    else if(n8<n9 && n8<n10)
        printf("n8 is minimum");
    else if(n9<n10)
        printf("n9 is minimum");
    else
        printf("n10 is minimum");
}