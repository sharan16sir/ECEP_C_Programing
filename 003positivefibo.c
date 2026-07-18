#include <stdio.h>

int fibo(int *n)
{
    int a=0;
    int b=1;
    
   while(a<=(*n))
    {
        printf("%d",a);
        int c=a+b;
        a=b;
        b=c;
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    fibo(&n);
    
}