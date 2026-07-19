#include <stdio.h>

int my_isalnum(char ch)
{
    
    if(ch>=97 && ch<=123)
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