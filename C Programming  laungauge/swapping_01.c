#include<stdio.h>
int main()
{
    int x , y;
    int temp;
    printf("Input two integer value\n");
    scanf("%d %d" , &x ,&y);
    printf("before swapping x=%d , y=%d\n" , x,y);
    
    temp = x;
    x = y; 
    y = temp;

    printf("after swapping x =%d , y= %d\n", x,y);
    
    return 0;
}