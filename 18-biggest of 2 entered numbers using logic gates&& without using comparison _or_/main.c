#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        unsigned int n1=0,n2=0,diff=0;
        printf("please enter your two numbers\n");
        scanf("%d%d",&n1,&n2);
        diff=n1-n2;
        if((diff>>31)&1==1)
        {
            printf("n2 is bigger\n");
        }
        else if (((diff>>31)&1==0)&diff==0)
        {
            printf("n1=n2");
        }
        else
        {
            printf("n1 is bigger\n");
        }

    }
    return 0;
}
