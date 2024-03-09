#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        unsigned int n1=0;
        unsigned char i=0,count_ones=0,bit_value=0;
        printf("please enter your integer number\n");
        scanf("%d",&n1);
        for(i=0; i<sizeof(n1)*8; i++)
        {
            bit_value=(n1>>i)&1;
            if(bit_value==1)
            {
                count_ones++;
            }
        }
        printf("number of ones is %d\n",count_ones);
    }
    return 0;
}
