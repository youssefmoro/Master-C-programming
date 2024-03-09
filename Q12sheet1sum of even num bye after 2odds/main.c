#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number=0,sum=0,flag=0;
    for(;;)
    {
        printf("please enter the number\n");
        scanf("%d",&number);

        if((number%2)!=0)
        {
            flag++;
            if(flag==2)
            {
                printf("bye");
                break;
            }
        }
        else
        {
            flag=0;
            sum+=number;
            printf("sum of entered numbers is %d\n",sum);
        }
    }

    return 0;
}
