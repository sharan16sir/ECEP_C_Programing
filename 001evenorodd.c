#include <stdio.h>

int oddoreven(int *n)
{
    return ((*n)%2==0)?1:0;
}

int main()
{
    int n;
    scanf("%d",&n);

    if(oddoreven(&n))
    printf("even");
    else
    printf("odd");
}