#include <stdio.h>
#include <stdlib.h>

unsigned int maxXor (unsigned int n1,unsigned int n2,unsigned int *max_n1,unsigned int *max_n2)
{
 unsigned int i1=0,i2=0,max_result=0,temp=0;
        if(n1>n2)
        {
            n1=n1+n2;
            n2=n1-n2;
            n1=n1-n2;
        }
        for(i2=n1; i2<=n2; i2++)
        {
            for(i1=i2+1; i1<=n2; i1++)
            {
                temp=i2^i1;
                if(temp>=max_result)
                {
                    *max_n1=i2;
                    *max_n2=i1;
                    max_result=temp;
                     printf("%d ^ %d = max result=%d\n",*max_n1,*max_n2,max_result);
                }
            }
        }
        return max_result;
}

int main()
{
    while(1)
    {
        unsigned int n1=0,n2=0,result=0,max_n11=0,max_n22=0;
        printf("please enter the two numbers\n");
        scanf("%d%d",&n1,&n2);
        result=maxXor(n1,n2,&max_n11,&max_n22);
        printf("%d ^ %d = max result=%d\n",max_n11,max_n22,result);

    }

    return 0;
}
