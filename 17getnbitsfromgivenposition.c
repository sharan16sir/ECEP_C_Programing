#include <stdio.h>

int main()
{
    int num,n,pos;

    scanf("%d %d %d",&num,&n,&pos);

    int mask=(1<<n)-1;
    int bits=pos-n+1;
    int res=(num&(mask<<bits))>>bits;

    printf("%d",res);
}