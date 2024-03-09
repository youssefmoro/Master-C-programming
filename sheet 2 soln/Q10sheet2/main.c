#include <stdio.h>
#include <stdlib.h>

int get_bit (int number,int bit)
{
    unsigned n1=1;
    n1=n1<<(bit);
    if(number&n1)
    {
        return (1);
    }
    else
    {
         return(0);
    }

}

int get_diff (int n)
{
    unsigned char first_bit_place=0,count_diff=0,i=0,saver=0;
    for(i=0; i<32; i++)
    {
        if(saver<=count_diff)
        {
            saver=count_diff;
        }

        for(i=0; i<=31&&!first_bit_place; i++)
        {
            if(get_bit(n,i))
            {
                first_bit_place=i;
            }
        }
        for(i=first_bit_place+1; i<=31; i++)
        {
            if(get_bit(n,i)==0)
            {
                count_diff++;
                saver=count_diff;
            }
            else
            {
                break;
            }
        }
    }
    return saver;
}
int main()
{
    while(1)
    {
        unsigned int n1=0;
        printf("please enter your number\n");
        scanf("%d",&n1);
        printf("max diff=%d",get_diff(n1));
    }
    return 0;
}
