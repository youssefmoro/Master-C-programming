#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    for(;;)
    {

        signed short n1,result=1,flag=0;
        double i;
        printf("please enter +ve integer\n");
        scanf("%d",&n1);
        if(n1<=0)
        {
            printf("invalid input");
        }
        else
        {
            for(i=0; i<=16&&flag==0; i++)
            {
                result=pow(2,i);
                if (n1==result)
                {
                    flag=1;
                }

            }
            if (flag==1)
            {
                printf("%d ist schon mit zwei ",n1);
            }
            else
            {
                printf("%d is not a base of 2",n1);
            }

        }
    }
    return 0;
}
