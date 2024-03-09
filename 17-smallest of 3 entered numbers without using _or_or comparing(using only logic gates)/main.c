#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        /*unsigned int n1=0,n2=0,n3=0,diff=0;
        printf("please enter your 3 numbers\n");
        scanf("%d%d%d",&n1,&n2,&n3);
        diff=n1-n2;
        if((diff>>31)&1==1)
        {
            diff=n1-n3;
                  if((diff>>31)&1==1)
            {
                printf("n1 is the smallest");
            }
            else
            {
                printf("n3 is the smallest");
            }
        }

        else
        {
            diff=n2-n3;
            if((diff>>31)&1==1)
            {
                printf("n2 is the smallest");
            }
            else
            {
                printf("n3 is the smallest");
            }
        }*/
        //another solution without using diff
        unsigned int n1=0,n2=0,n3=0,i=0;
        printf("please enter your 3 numbers\n");
        scanf("%d%d%d",&n1,&n2,&n3);
        for(i=0;n1&&n2&&n3;i++)
        {
            n1--,n2--,n3--;
        }
        printf("samllest=%d\n",i);
    }//مشكلة الحل ده ان لو قارنت ارقام سالب هيدي كوندشن فولس علي طول مش هيعرف يقارن زي اللي فات

    return 0;
}
