#include <stdio.h>
#include <stdlib.h>
void mul_add (int*px,int*py);

int main()
{
    unsigned int n1=0,n2=0,mul=0,add=0;
    printf("please enter n1 then n2\n");
    scanf("%d%d",&n1,&n2);
    add=n1,mul=n2;
    mul_add(&add,&mul);
     printf("add=%d , mul=%d",add,mul);

    return 0;
}
