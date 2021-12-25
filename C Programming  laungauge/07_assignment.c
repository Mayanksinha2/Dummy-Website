#include<stdio.h>
int main()
{
    int a,b,c,d,x,eg1,eg2;
    printf("Enter the value of a,b,c and d\n");
    scanf("%d %d %d %d",&a ,&b ,&c ,&d);

    eg1=b%a+--a*a-b++*b/2+(c&&d+a||b);
    eg2=a*d-c%b+!d||a%2+d---(b++);
    printf("Result of the first example=%d\n",eg1);
    printf("result of the second example=%d\n",eg2);

    return 0;
}