#include <stdio.h>

int main()
{
    int n,a,b,val;
    scanf("%d %d %d %d",&n,&a,&b,&val);

    int l=b-a+1;
    int lsb=n&((1<<l)-1);

    int res=val&~(((1<<l)-1)<<a);
    int res2=res|(lsb<<a);

    printf("%d",res2);
}

