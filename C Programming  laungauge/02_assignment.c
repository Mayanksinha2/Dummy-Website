#include<stdio.h>
int main()
{
    int a,b,x,y,r;
    printf("Enter the value of a,b,x,y\n");
    scanf("%d %d %d %d",&a ,&b ,&x ,&y);

    r=a<=b>x>=y>b<=0;
    printf("Result of the expression=%d\n",r);

    return 0;
}