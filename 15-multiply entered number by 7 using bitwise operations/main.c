#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        unsigned int n1=0;
        printf("please enter your number\n");
        scanf("%d",&n1);
        n1=(n1<<3)-n1;
        printf("number*7=%d\n",n1);
    }

    return 0;
}
