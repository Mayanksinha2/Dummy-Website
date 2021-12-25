#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);

    if ((a>b) && (a>c))
    {
        printf("a is greater than b,c");
    }
    else if ((b>a)&&(b>c))
    {
        printf("b,c is greater than a");
    }
    else
        printf("c is greatest");
    return 0;
}