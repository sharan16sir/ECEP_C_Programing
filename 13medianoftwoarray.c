#include <stdio.h>

int bubblesort(int arr[],int n)
{
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

      for(int i=0;i<n;i++)
    {
          printf("%d",arr[i]);

    }

    printf("\n");

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

     for(int i=0;i<n;i++)
    {
          printf("%d",arr[i]);

    }

     int n1;
    scanf("%d",&n1);

    int arr1[n1];

    for(int i=0;i<n1;i++)
    {
          scanf("%d",&arr1[i]);

    }
/* 
     for(int i=0;i<n1;i++)
    {
          printf("%d",arr1[i]);

    } */

    bubblesort(arr,n);
    bubblesort(arr1,n1);
   

    int mid;
   

    if(n%2==0)
    {
         mid=n/2;

    }
    else
    {
        mid=(n+1)/2;

    }

   // printf("%d",mid);

    int mid1;
   

    if(n1%2==0)
    {
         mid1=n1/2;

    }
    else
    {
        mid1=(n1+1)/2;

    }

    

  //  printf("%d",mid1);
     printf("%d\n",arr[mid-1]);
      printf("%d",arr1[mid1-1]);

    float median =(arr[mid-1]+arr1[mid1-1])/(float)2;

      printf("%f",median);
}