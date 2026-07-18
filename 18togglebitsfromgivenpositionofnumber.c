#include <stdio.h>

int togglenbits(int num,int n,int p)
{
    int l=p-n+1;
    int mask=(1<<n)-1;
    int res=num^(mask<<l);
    return res;

}

int main()
{
    int num;
    int n,p;
    scanf("%d %d %d",&num,&n,&p);

    printf("%d",togglenbits(num,n,p));
}