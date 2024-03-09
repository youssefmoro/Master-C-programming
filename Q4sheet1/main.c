#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int i=0,n1=0,n2=0,sum=0;
    printf("please enter your two numbers\n");
    scanf("%d%d",&n1,&n2);
    for(i=0;i<n1;i++)
    {
      sum+=n2;
    }
    printf("sum is %d",sum);
    return 0;
}
