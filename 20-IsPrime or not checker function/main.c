#include <stdio.h>
#include <stdlib.h>
int IsPrime (int n)
{
    unsigned int i5,flag=1;
    for(i5=2; i5<n; i5++)
    {
        if(n%i5==0)
        {
            flag=0;
        }
    }
    return flag;
}
int main()
{
    while(1)
    {
        unsigned int n1=0,n2=0,i=0,count=0;
       /* printf("\nplease enter the number\n");
        scanf("%d",&n1);
        for(i=2; i<n1; i++)
        {
            if(IsPrime(i))
            {
                printf("%d ",i);
                count++;

            }
        }
        printf("no of prime numbers under input =%d\n",count);*/

        printf("please enter the number of prime numbers you want to print\n");
        scanf("%d",&n2);
        count=0,i=2;
        for(count=0; count<n2; count++)
        {
            if(IsPrime(i))
            {

                printf("%d ",i);
                count++;
            }
            i++;
        }
    }
    return 0;
}
