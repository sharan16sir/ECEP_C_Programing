#include <stdio.h>

int secondlargest(int arr[],int *size)
{
    int max1=0,max2=0;

    for(int i=0;i<(*size);i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2)
        {
            max2=arr[i];
        }
    }

    printf("%d",max2);
}
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    secondlargest(arr,&n);
}