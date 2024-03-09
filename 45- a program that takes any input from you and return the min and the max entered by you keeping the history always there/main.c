#include <stdio.h>
#include <stdlib.h>
#include "math.c"

int main()
{

    while(1)
    {
        int x=0;
        scanf("%d",&x);
        if(x==1)
        {
            printf("min=%d\n",get_min());
        }
        else if(x==0)
        {
            printf("max=%d\n",get_max());
        }
        else
        {
            take_n(x);
        }

    }
    return 0;
}
