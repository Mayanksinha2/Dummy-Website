#include<stdio.h>
int main()
{
    int a,b,c,d,x;
    printf("Enter the value of a,b,c and d\n");
    scanf("%d %d %d %d",&a ,&b ,&c ,&d);

    x=b%a+--a*a-b++*b/2+(c&&d+a||b);
    printf("Result of the expression =%d\n",x);

    return 0;
}