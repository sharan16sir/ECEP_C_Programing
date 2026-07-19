#include <stdio.h>

int main()
{
    int num,n;
    scanf("%d %d",&num,&n);

    int tem=num;

    int mask=(1<<n)-1;
    int l=32-n;

    //printf("%d",(tem&(mask<<l))>>l);

    int res1=(tem&(mask<<l))>>l;
    //printf("%d",num<<n);
    int res2=(num<<n)|res1;

    printf("%d",res2);

    for(int i=31;i>=0;i--)
    {
        if(res2&(1<<i))
        printf("1");
        else
        printf("0");
    }
}