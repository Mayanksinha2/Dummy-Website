// write a c program to check whether a character entered by the user is a vowel or not by using the switch case statement

#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a character:");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("%c is vowel.",ch);
        break;
        default:
        printf("%c is not a vowel.",ch);
    }
    return 0;
    
}