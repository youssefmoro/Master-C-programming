#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int i=0,n1=0,n2=0,count=0,flag=0;
    printf("please enter your two numbers\n");
    scanf ("%d%d",&n1,&n2);
    if(n2>n1)
    {
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }

    i=n2+1;

    while(i<n1)
    {
        flag=0;

        for(count=2; count<i && flag==0; count++)
        {

            if(i%count==0)
            {
                flag=1;
            }

        }
        if (flag==0)
        {
            printf("%d ",i);
            printf("prime\n",i);

        }
        else
        {
            printf("%d ",i);
            printf("not prime\n",i);
        }



        i++;
    }

    return 0;
}
