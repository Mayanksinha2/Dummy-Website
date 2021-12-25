#include<stdio.h>
int main()
{
    float a = 10;
    float b = 20;
    float c = 30;
    float d = 40;
    float e;

    e = a+b*c/d;
    printf("value of a+b*c/d is :%f\n", e);

    e = (a+b)*c/d;
    printf("value of (a+b)*c/d is :%f\n" , e);

    e = a+ (b*c)/d;
    printf("value of a + (b*c)/d is:%f\n" , e);

    e = a+b*(c/d);
    printf("value of a+b*(c/d) is :%f\n" , e);

    return 0;
}