#include <stdio.h>

int my_isalnum(char ch)
{
    
    if(ch>=65&&ch<=91 || ch>=97 && ch<=123 || ch>=48&&ch<=57)
    {
        printf("the character is an alnum character");
    }
    else
    {
         printf("the character is not an alnum character");
    }
}

int main()
{
    char ch;
    scanf("%c",&ch);

    my_isalnum(ch);

    
}