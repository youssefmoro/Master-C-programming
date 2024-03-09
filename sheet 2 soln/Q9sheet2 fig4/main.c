#include <stdio.h>
#include <stdlib.h>
void draw_astric (int n3)
{
    unsigned char i=0;
    for(i=0; i<n3; i++)
    {
        printf("*");
    }
}

void draw_space (int n)
{
    unsigned char i=0;
    for(i=0; i<n; i++)
    {
        printf(" ");
    }
}
void draw_pyramid (int n2)
{
    signed char i=0,i2=1;
    for(i=n2-1; i>=0; i--)
    {
        draw_space(i);
        draw_astric(i2);
        i2=i2+2;
        printf("\n");
    }


}

int main()
{
    while(1)
    {
        unsigned int n1=0;
        printf("please enter no of lines\n");
        scanf("%d",&n1);
        draw_pyramid(n1);
    }
    return 0;
}
