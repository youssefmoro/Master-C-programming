#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        unsigned char choice=0,bit_n=0;
        unsigned short n=0;
        printf("please enter the number\n");
        scanf("%d",&n);
        printf("please enter the bit to be operated\n");
        scanf("%d",&bit_n);
        printf("for set bit enter 1\n");
        printf("for clear bit enter 2\n");
        printf("for toggle bit enter 3\n");
        printf("for read bit enter 4\n");
        scanf("%d",&choice);

        if(choice==1)
        {
            n=n|(1<<bit_n);
            printf("after setting the bit n=%d\n",n);
        }
        else if(choice==2)
        {
            n=n&(~(1<<bit_n));
            printf("after clearing the bit n=%d\n",n);
        }
        else if(choice==3)
        {
            n=n^(1<<bit_n);
            printf("after toggling the bit n=%d\n",n);
        }
        else if(choice==4)
        {
            n=(n>>bit_n)&1;
            printf("bit=%d\n",n);
        }
    }

    return 0;
}
