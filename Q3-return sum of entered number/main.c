#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count=0,i=0,number=0,sum=0;
    for(;;)
    {
        sum=0;
        printf("please enter the total count of numbers you will enter\n");
        scanf("%d",&count);
        for(i=0; i<count; i++)
        {
            printf("enter number\n");
            scanf("%d",&number);
            sum+=number;

        }
        printf("sum of entered numbers is %d\n",sum);

    }
    return 0;
}
