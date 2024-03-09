#include <stdio.h>
#include <stdlib.h>

void draw_astric_n_times (char n)
{
    unsigned char i=0;
    for(i=n;i>0;i--)
    {
       printf("*");
    }

}
int main()
{
    unsigned char n1=0,i1=0;
    printf("please enter no of lines\n");
    scanf("%d",&n1);
    for(i1=1;i1<=n1;i1++)
    {
        draw_astric_n_times(i1);
        printf("\n");
    }
    return 0;
}
