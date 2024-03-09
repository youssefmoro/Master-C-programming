#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
int main()
{
    while(1)
    {
        int x,y;
        printf("enter number to be pushed to queue, to pop enter 0\n");
        scanf("%d",&x);
        if(x!=0)
        {
            if(queue_in(x)==QUEUE_FULL)
            {
                printf("QUEUE is full\n");
            }
            else
            {
                printf("%d pushed to QUEUE\n",x);
            }
        }
        else
        {
            if(queue_out(&y)==QUEUE_EMPTY)
            {
                printf("QUEUE empty\n");
            }
            else
            {
                printf("%d is popped\n",y);
            }

        }
    }
    return 0;
}
