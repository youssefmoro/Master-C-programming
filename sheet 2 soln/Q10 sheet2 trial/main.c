#include <stdio.h>
#include <stdlib.h>
void print_binary (unsigned int n)
{
    signed char i;
    for(i=31; i>=0; i--)
    {
        printf("%d",((n>>i)&1));
    }
}
unsigned int get_bit (unsigned int number,unsigned int bit)
{
    unsigned int n1;
    n1=((number>>bit)&1);
    if(n1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

unsigned int count_zeros (unsigned int n)
{
    unsigned int i,c=0,max=0,flag=0;
    for(i=0; i<32; i++)
    {
        if ((n>>i)&1)
        {
            flag=1;
            if(c>max)
            {
                max=c;
            }
            c=0;
        }
        else
        {
            if (flag==1)
            {
                c++;
            }

        }

    }
    return max;
}
/*int max_count (int n1)
{
    unsigned int i1=0,max_c=0;
    for(i1=0; i1<32; i1++)
    {
        if(count_zeros(n1)>=max_c)
        {
            max_c=count_zeros(n1);
        }

    }
    return max_c;

}*/
int main()
{
    unsigned int max=0,x=0b00000100001100100100000000;
    print_binary(x);
    //unsigned int input1=0;
     printf("\n");
    //scanf("%d",&input1);
    max=count_zeros(x);
    printf("max No of zeros=%d",max);
    return 0;
}
