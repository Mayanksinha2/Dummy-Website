#include<stdio.h> // header file section
int main()
{
    int a=10, b=10, c=1, d=5, r;
    r=++a+(++b)+b--*(++c)+--d;
    printf("The value of r =%d" , r);

    return 0;
}

