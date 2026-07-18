#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    printf("Choose First Day :1. Sunday 2. Monday 3. Tuesday 4. Wednesday 5. Thursday6. Friday7. Saturday");

    int day;
    scanf("%d",&day);

   int count=day;

    for(int i=1;i<=n;i++)
    {
        if(count>7)
        {
            count=0;
        }
        else
        {
            count++;

            
        }
    }

    switch(count)
    {
        case 1:
        printf("The day is Monday");
        break;
        case 2:
        printf("The day is Tuesday");
        break;
         case 3:
        printf("The day is Wednesday");
        break;
         case 4:
        printf("The day is Thursday");
        break;
         case 5:
        printf("The day is Friday");
        break;
         case 6:
        printf("The day is Saturday");
        break;
         case 7:
        printf("The day is Sunday");
        break;
        

        

    }

}