#include<stdio.h>
int main()
{
    float a,b,c,s;
    printf("Enter 3 float numbers\n");
    scanf("%f %f %f",&a,&b,&c);
    s=a+b+c;
    printf("sum in float=%f\n",s);
    printf("sum in integer =%d",(int)s);

    return 0;
}