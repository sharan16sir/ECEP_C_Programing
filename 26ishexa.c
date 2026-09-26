#include <stdio.h>


int ishexa(char ch)
{
    if(ch>=48 && ch<=57 || ch >=65 && ch<=70 || ch >=97 && ch<= 102)
    return 1;
    else
    return 0;
}
int main()
{
    char ch;
    scanf("%c",ch);

    if(ishexa(ch))
    printf("yes");
    else
    printf("No");
}