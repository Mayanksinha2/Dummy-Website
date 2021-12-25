#include<stdio.h>
int main(){
    float celcius;
    printf("input temp in celcius \n");
    scanf("%f",&celcius);
    printf("clecius value of this is:%20.2f \n",(celcius*9)/5+32);
    printf("clecius value of this is:%f \n",(celcius*9)/5+32);
     printf("clecius value of this is:%10",(int)(celcius*9)/5+32);
     return 0;
}