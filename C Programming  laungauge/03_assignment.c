#include<stdio.h>
int main()
{
    int a,b,x,y;
    printf("Enter the value of a,b\n");
    scanf("%d %d ",&a ,&b );
    x=a+b;      //3+2=5
    y=a-b;      //3-2=1
    x*=a+y;     //x*=3+1=20,x=5*4=20

    printf("Result of the expression 'x=a+y' = %d\n" , x);

    return 0;
}