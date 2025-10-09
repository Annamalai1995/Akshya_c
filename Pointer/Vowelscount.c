#include<stdio.h>
int vowelcount(char *str)
{
    int count=0;
    while (*str != '\0')
    {
        char ch=*str;

        if(ch >='A' && ch <= 'Z')
        {
            ch+=32;

        }

        if( ch =='a' || ch =='e'|| ch == 'i' || ch == 'o'|| ch == 'u')
        {
            count++;

        }
        str++; //Pointer to move next character

    
    }
    return count;


    

}
int main()
{
    char word[100];
    printf("Enter the Words");
    fgets(word,sizeof(word),stdin);
    int vowels=vowelcount(word);
    printf("Number of Vowels:%d\n",vowels);
    return 0;

}