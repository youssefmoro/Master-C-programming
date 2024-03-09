#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(;;)
    {


    unsigned int n1=0,n2=0;
    printf("please enter your two numbers\n");
    scanf("%d%d",&n1,&n2);
    /*if (n2>n1)
    {
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }*/
    if (n2>n1)
    {
        printf("remainder is %d",n1);
    }
    while(n1>=n2)
    {
        n1=n1-n2;
    }

    printf("remainder is %d ",n1);
    }
    return 0;
}
