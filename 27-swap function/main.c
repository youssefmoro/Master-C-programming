#include <stdio.h>
#include <stdlib.h>



int swap (int *n11, int *n22);
int main()
{
    while(1)
    {
        unsigned int n1=0,n2=0;
        printf("please enter n1\n");
        scanf("%d",&n1);
        printf("please enter n2\n");
        scanf("%d",&n2);
        swap(&n1,&n2);
        printf("%d %d\n",n1,n2);
    }
    return 0;
}
