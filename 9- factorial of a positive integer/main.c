#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed short n1,i,result=1;
    printf("please enter +ve integer\n");
    scanf("%d",&n1);
    if(n1<=0)
    {
        printf("invalid input");
    }
    else
    {
        result=1;
        for(i=1; i<=n1; i++)
        {
            result=result*i;

        }
        printf("facotrial of %d is %d",n1,result);
    }
    return 0;

}
