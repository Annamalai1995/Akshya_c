#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the vowel letters");
    scanf("%c",&ch);
    switch (ch)
    {
        case 'a':
        printf("\n a is vowels");
        break;
         case 'e':
        printf("\n e is vowels");
        break;
        case 'i':
        printf("\n i is vowels");
        break;
        case 'o':
        printf("\n o is vowels");
        break;
        case 'u':
        printf("\n u is vowels");
        break;
        default:
        printf("This is not a vowels");

    }
    
    
}