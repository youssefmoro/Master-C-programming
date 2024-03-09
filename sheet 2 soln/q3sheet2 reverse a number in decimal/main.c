#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    while(1)
    {
        unsigned int n1=0,digit=0,new_n=0,n2=0;
        unsigned int count=0;
        printf("please enter your number\n");
        scanf("%d",&n1);
        n2=n1;
        while(n1>0)
        {
            digit=n1%10;
            count++;
            n1=(n1-digit)/10;
        }
        count=count-1;
        while(n2>0)
        {
            digit=n2%10;
            new_n=new_n+digit*pow(10,count);
            n2=n2/10;
            --count;
        }
        printf("new number = %d\n",new_n);

    }
    return 0;
}
