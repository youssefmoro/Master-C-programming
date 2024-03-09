#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        unsigned char n1;
        unsigned int sum;
        printf("please enter your number\n");
        scanf("%u",&n1);
        sum=(n1*(n1+1))/2;
        printf("sum=%u\n",sum);
    }
    return 0;
}
