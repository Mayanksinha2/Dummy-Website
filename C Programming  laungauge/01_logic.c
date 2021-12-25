#include<stdio.h>
int main()
{
    printf("%d\n",'a'&&'A');
    printf("%d\n",0||-5);
    printf("%d\n",!(!5%5 && !'A'));
    printf("%d",!('a'-32=='A'));

    return 0;
}