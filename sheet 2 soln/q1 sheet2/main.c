#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        signed short r=0,area=0,c=0;
        printf("please enter the radius of your circle\n");
        scanf("%d",&r);
        if(r>0)
        {
            area=3.14*r*r;
            c=2*3.14*r;
            printf("area=%d , circumference=%d", area,c);

        }
        else
        {
            printf("please enter a valid number\n");
        }
    }
    return 0;
}
