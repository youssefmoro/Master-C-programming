#include "queue.h"
int queue[QUEUE_SIZE];
int sp=0;
int temp=0;
void swap_var(int *n1,int *n2)
{
    int temp1;
    temp1=*n1;
    *n1=*n2;
    *n2=temp1;
}
int queue_in(int data)
{
    if(sp==0)
    {
        queue[0]=data;
        sp++;
        return QUEUE_DONE;
    }
    else if(sp==1)
    {
        queue[1]=queue[0];
        queue[0]=data;
        sp++;
        return QUEUE_DONE;
    }
    else if(sp<QUEUE_SIZE&&sp>1)
    {
        int i;
        temp=queue[0];
        queue[0]=data;
        for(i=sp; i>1; i--)
        {
            swap_var((queue+i),(queue+i-1));
        }
        queue[1]=temp;
        sp++;
        return QUEUE_DONE;
    }
    else
    {
        return QUEUE_FULL;
    }
}

int queue_out(int *data)
{
    if(sp==0)
    {
        return QUEUE_EMPTY;
    }
    else
    {
        *data=queue[sp-1];
        sp--;
        return POP_DONE;
    }
}
