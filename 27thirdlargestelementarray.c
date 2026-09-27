#include <stdio.h>

int findthirdlargest(int arr[],int *size)
{
    int first=0;
    int second=0;
    int third=0;

    for(int i=0;i<(*size);i++)
    {
        if(arr[i]>first )
        {
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second)
        {
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third)
        {
            third=arr[i];
        }

    }

    printf("%d",third);
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

  /*   for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    } */

    findthirdlargest(arr,&n);
}