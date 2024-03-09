#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(;;)
    {
        unsigned int i=0,n1=0,count=0,flag=0;
        printf("please enter your number\n");
        scanf ("%d",&n1);

        for(i=1; i*i<=n1&&flag==0; i++)
        {
            flag=0;
            if(i*i==n1)
            {
                flag=1;
            }
        }
        //if (flag==0)
        //{
        //  printf("%d doesn't have square root\n",n1);
        //}
        //else
        //{
        printf("%d ",n1);
        printf("has a square = %d\n",i-1);

    }
    return 0;
}
