#include <stdio.h>

int ispunctu(char ch)
{
    if(ch>=33&&ch<=47)
    return 1;
    else
    return 0;
}

int main()
{
    char ch;
    scanf("%c",&ch);

    int res=ispunctu(ch);
    if(res)
    printf("Entered character is punctuation character");
    else
    printf("Not");


}