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



       for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==j||(j+i)==5+1)
            printf("%d",j);
            else
            printf(" ");
        }
        printf("\n");
    } 

    
}