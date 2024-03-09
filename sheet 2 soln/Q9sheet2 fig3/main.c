#include <stdio.h>
#include <stdlib.h>

void draw_spaces(char spaces)
{
    unsigned char i2=0;
    for(i2=0; i2<spaces; i2++)
    {
        printf(" ");
    }

}

void draw_astric_nline(char n)
{
    unsigned char i=0;
    for(i=0; i<n; i++)
    {
        printf("*\n");
        draw_spaces(i+1);
    }
}

void draw_astric_nline_reverse(char n_reverse)
{
    unsigned char i_reverse=0;
    for(i_reverse=n_reverse; i_reverse>0; i_reverse--)
    {
        draw_spaces(i_reverse);
        printf("*\n");
    }


}
int main()
{
    while(1)
    {
    unsigned char n1=0,i1=0;
    printf("please enter no of lines\n");
    scanf("%d",&n1);
    draw_astric_nline_reverse(n1);
    draw_astric_nline(n1);


    }
        return 0;
}
