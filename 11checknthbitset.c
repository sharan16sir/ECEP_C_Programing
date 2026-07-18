#include <stdio.h>

int main()
{
    int num,n,m;
    scanf("%d %d %d",&num,&n,&m);

    if(num&(1<<n))
    {
        printf("%d",num&~(1<<m));
    }
}