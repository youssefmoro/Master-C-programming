#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count=0,i1=0,i2=0,i3=0,flag=0,flag_count=0;
    for(;;)
    {
        count=0,i1=0,i2=0,i3=0,flag=0,flag_count=0;
        printf("\nplease enter your count of prime numbers\n");
        scanf("%d",&count);
        for(i1=0; i1<count; i1++)
        {
            for(i2=1; i2<20001&&flag_count<=count; i2++)
            {
                flag=0;
                for(i3=2; i3<i2&&flag==0; i3++)
                {
                    if(i2%i3==0)
                    {
                        flag=1;
                    }
                }
                if(flag==0)
                {
                    printf("%d ",i2);
                    flag_count++;
                }
            }
        }
    }
    return 0;
}
