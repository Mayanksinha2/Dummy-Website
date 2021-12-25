#include<stdio.h>
int main()
{
    int a,b,addition,substraction,multiplication,division,modulus,x;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a,&b);

    addition=a+b;
    substraction=a-b;
    multiplication=a*b;
    division=a/b;
    modulus=a%b;
    x=a+8*b++-3/2+a%b*4+10+--a;

    printf("Addition of a, b is :%d\n", addition);
    printf("Substraction of a, b is :%d\n", substraction);
    printf("Multiplication of a,b is :%d\n", multiplication);
    printf("Division of a, b is :%d\n", division);
    printf("Modulus of a, b is :%d\n", modulus);
    printf("complex arithmetic problem solution = %d\n", x);

    return 0;
}