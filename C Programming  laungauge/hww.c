#include<stdio.h>
int main()
{
    int a;
    float b;
    double c;
    printf("enter the integer value\n");
    scanf("%i",&a);
    printf("enter the float value\n");
    scanf("%f",&b);
    printf("enter the double value\n");
    scanf("%lf",&c);

    printf("integer value=%i\n",a);
    printf("after_type_casting in float=%f\n",(float)a);
    printf("float value=5f \n",b);
    printf("after_type_casting in int=%i\n",(int)b);
    printf("double value=%lf\n",c);
    printf("after_type_casting in float=%f\n",(float)c);
    printf("after_type_casting in int=%i\n",(int)c);
    return 0;
}