#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n1, n2, larger,smaller,i ;
    printf("please enter your two numbers\n");
    scanf("%d%d",&n1,&n2);
    if (n1>n2)
    {
        larger=n1;
        smaller=n2;

    }
    else
    {
        larger=n2;
        smaller=n1;

    }

     for(i=larger-1; i>smaller; i--)
        {
            printf("%d ",i);
        }.accumulate

    return 0;
}
