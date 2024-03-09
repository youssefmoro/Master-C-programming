#include <stdio.h>
#include <stdlib.h>

void printed(int n)
{
    unsigned int i=0;
    for (i=0; i<=n; i++)
    {
        printf("%d ",i);
    }

}
int main()
{
    while(1)
    {
        unsigned int n1=0;
        printf("please enter the number\n");
        scanf("%u",&n1);
        printed(n1);
    }
    return 0;
}
