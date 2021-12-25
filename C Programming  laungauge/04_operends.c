#include<stdio.h>
int main()
{
    printf("9%5=%d\n" , 9%5);
    printf("-9%5=%d\n" , -9%5);
    printf("9%-5=%d\n" , 9%-5);
    printf("-9%-5=%d\n" , -9%-5);

    //second operand should be non-zero
    //printf("9%0=%d" , 9%0);
    //modulus operater doesn't work on floating-point number
    //printf("9.5%5=%d" , 9.5%5);

    return 0;
}