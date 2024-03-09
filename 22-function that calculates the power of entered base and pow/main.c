#include <stdio.h>
#include <stdlib.h>

int power_fun(n2,pow2);

int main()
{
    while(1)
    {


        unsigned int result=0, pow=0,n1=0;
        printf("please enter the base and then the power!\n");
        scanf("%d",&n1);
        scanf("%d",&pow);
        result=power_fun(n1,pow);
        printf("result=%d ",result);


    }
    return 0;
}
int power_fun(int n2,int pow2)
{
    unsigned char i=1;
    unsigned int result1=n2;
    if(pow2==0)
    {
        return 1;
    }
    else
    {
        for(i=1; i<pow2; i++)
        {
            result1=result1*n2;
        }
    }
    return result1;
}
