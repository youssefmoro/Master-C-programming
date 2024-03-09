#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        unsigned int n1=0;
        signed char i=0;
        printf("\nplease enter the number\n");
        fflush(stdin);
        scanf("%d",&n1);
        for(i=sizeof(n1)*8-1;i>=0; i--)
        {

            if(n1&(1<<i)==0)
            {
                printf("0");
            }
            else
            {
                printf("1");

            }
        }
    }
    return 0;
}
