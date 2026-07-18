#include <stdio.h>

int main()
{
   /*  for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i==j||(i+j)%2==0)
            printf("1");
            else
            printf("0");
        }
        printf("\n");
    } */

int count=5;

       for(int i=5;i>=1;i--)
    {

        for(int j=i;j<=5;j++)
        {
           
            printf("%d",j);
        }
        printf("\n");
    } 

         for(int i=2;i<=5;i++)
    {

        for(int j=i;j<=5;j++)
        {
           
            printf("%d",j);
        }
        printf("\n");
    } 

    
}