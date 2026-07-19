#include <stdio.h>

int main()
{
    int num,n;
    scanf("%d %d",&num,&n);

    int tem=num;

   unsigned int mask = (1U << n) - 1;
int l = 32 - n;

unsigned int res1 = (tem & mask) << l;
unsigned int res2 = (num >> n) | res1;

    for(int i=31;i>=0;i--)
    {
        if(res2&(1<<i))
        printf("1");
        else
        printf("0");
    }
}