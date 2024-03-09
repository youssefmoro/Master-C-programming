#include <stdio.h>
#include <stdlib.h>
void draw_spaces(int spaces);
void draw_seven (int n);
int main()
{
    while(1)
    {
        unsigned int lines=0;
        printf("please enter no of lines\n");
        scanf("%d",&lines);
        draw_fig(lines);
    }
    return 0;
}
