#include <stdio.h>
#include <stdlib.h>
void print_binary (unsigned int n)
{
    signed int i;
    for(i=31; i>=0; i--)
    {
        printf("%u",((n>>i)&1));
    }
}
unsigned int reverse_num (unsigned int n1)
{
    unsigned int n_new=0;
    int i1=0,i2=31;
    for(i1=0; i1<32; i2--,i1++)
    {

        if( (n1>>i1)&1)
        {
            n_new=n_new|(1<<i2);
        }
    }
    return n_new;

}

int main()
{
    while(1)
    {
        unsigned int n1=0;//,n_new=0,getb=0;
        //signed char i1=0,i2=0;
        printf("\nplease enter the number\n");
        fflush(stdin);
        scanf("%d",&n1);
        /*for(i1=sizeof(n1)*8-1; i1>=0; i1--)
        {
            getb=(n1>>i1)&1;
            n_new=n_new|(getb<<i2);
            i2++;
        }*/
        printf("%u %u\n",n1,reverse_num(n1));
        print_binary(n1);
        printf("\n");
        print_binary(reverse_num(n1));

    }

    return 0;
}
