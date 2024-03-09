#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count=0,i=0,number=0,min=0xABABABAB,max=0;
    for(;;)
    {

        printf("please enter the total count of numbers you will enter\n");
        scanf("%d",&count);
        for(i=0; i<count; i++)
        {
            printf("enter number\n");
            scanf("%d",&number);
            if (number>max)
            {
                max=number;
            }
            if(min>number)
            {
                min=number;
            }

        }
        printf("min is %d and max is %d\n",min,max);

    }
    return 0;
}
