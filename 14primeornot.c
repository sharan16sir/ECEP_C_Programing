#include <stdio.h>

int primeornot(int n)
{
    if(n==1||n==0)
    return 0;

    int count=0;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;

    }

    if(count==2)
    return 1;
    else
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);

    if(primeornot(n))
    {
        printf("Number is a prime number");
    }
    else
    {
        printf("number is not prime");
    }
}