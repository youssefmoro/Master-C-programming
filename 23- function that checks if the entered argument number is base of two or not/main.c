#include <stdio.h>
#include <stdlib.h>

int base_of_two (int n)
{
    signed short result=1,flag=0;
    char i;
    if(n<=0)
    {
        printf("invalid input");
    }
    else
    {
        for(i=0; i<=sizeof(n)*8&&flag==0; i++)
        {
            result=pow(2,i);
            if (n==result)
            {
                flag=1;
            }

        }
        if (flag==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }

    }
}
int main()
{
    while(1)
    {
        unsigned int n1;
        printf("please enter the number!\n");
        scanf("%d",&n1);
        if(base_of_two(n1))
        {
            printf("base of two\n");
        }
        else
        {
            printf("not base of two\n");
        }
    }

    return 0;
}
