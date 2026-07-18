#include <stdio.h>

int main()
{
    int num,n,val;
    scanf("%d %d %d",&num,&n,&val);

    int mask=(1<<n)-1;
    int res1=num&~mask;
    int res2=val&(mask);
    int res3=res1+res2;

    printf("%d",res3);
}