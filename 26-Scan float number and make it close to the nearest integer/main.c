#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        float n1=0,diff=0;
        unsigned int floor=0;
        printf("please enter float number\n");
        scanf("%f",&n1);
        floor=n1;
        diff=n1-floor;
        if(diff>=0.5)
        {
            n1=floor+1;
        }
        else
        {
            n1=floor;
        }
        printf("result to the nearest =%0.1f\n",n1);
    }
    return 0;
}
