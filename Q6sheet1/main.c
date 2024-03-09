#include <stdio.h>
#include <stdlib.h>
#include"math.h"

int main()
{
    unsigned int power=0,i=0,number=0,result=1;
    for(;;)
    {

        printf("please enter the number and the power afterwards\n");
        scanf("%d%d",&number,&power);
        for(i=0; i<power; i++)
        {
            result*=number;
        }
        printf("result is %d\n",result);

    }
    return 0;
}
