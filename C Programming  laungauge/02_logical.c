#include<stdio.h>
int main()
{
    int x=1, y=0;
    printf("%d",++x||++y);
    printf("%d %d", x,y);

    return 0;
}