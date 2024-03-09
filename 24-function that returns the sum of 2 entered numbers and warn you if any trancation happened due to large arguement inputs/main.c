#include <stdio.h>
#include <stdlib.h>
unsigned char add(unsigned char n1,unsigned char n2,unsigned char*px);
int main()
{
    while(1)
    {
        unsigned char n1=0,n2=0,sum=0;
        printf("please enter n1 then n2\n");
        scanf("%hhu",&n2);
         scanf("%hhu",&n1);

        if (add(n1,n2,&sum))
        {
            printf("sum=%hhu\n",sum);

        }
        else
        {
            printf("trancation happened");
        }
    }
    return 0;
}
