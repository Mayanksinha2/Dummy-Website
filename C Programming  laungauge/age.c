#include<stdio.h>
int main()
{
    int age;
    printf("Enter the number\n");
    scanf("%d " , &age); 

        if (age<12)
        {
        printf("you ar not elliglble\n");
        }
     else if  (age>18)
        {
         printf("you are not elligible\n");
         }
    else if (age>=12 && age<=18)
         {
          printf("you are elligible\n");
         }

      return 0;
}