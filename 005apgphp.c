#include <stdio.h>

int main()
{
    int a,r,n;
    scanf("%d %d %d",&a,&r,&n);

    int ap=a;
    int gp=a;
    float hp=(float)1/(float)a;

    for(int i=0;i<n;i++)
    {
        printf("%d ",ap);
        ap+=r;


    }

      for(int i=0;i<n;i++)
    {
        printf("%d ",gp);
        gp*=r;


    }

       for(int i=0;i<n;i++)
    {
        printf("%f ",hp);
        hp+=(float)1/(float)r;


    }


}