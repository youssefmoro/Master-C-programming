#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*unsigned int n1,n2,temp;
    printf("please enter the two values\n");
    scanf("%d%d",&n1,&n2);
    printf("n1=%d\nn2=%d\n",n1,n2);
    temp=n1,n1=n2,n2=temp;
    printf("after swapping n1=%d and n2=%d",n1,n2);*/
    /*unsigned int n1,n2;
    printf("please enter the two values\n");
    scanf("%d%d",&n1,&n2);
    printf("n1=%d\nn2=%d\n",n1,n2);
    n1=n1+n2,n2=n1-n2,n1=n1-n2;
    printf("after swapping n1=%d and n2=%d",n1,n2);*/
    unsigned int n1,n2;
    printf("please enter the two values\n");
    scanf("%d%d",&n1,&n2);
    printf("n1=%d\nn2=%d\n",n1,n2);
    n1=n1*n2,n2=n1/n2,n1=n1/n2;
    printf("after swapping n1=%d and n2=%d",n1,n2);

    return 0;
}
