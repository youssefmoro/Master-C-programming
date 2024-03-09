
void draw_spaces(int spaces)
{
    unsigned int i2=0;
    for(i2=0; i2<spaces; i2++)
    {
        printf(" ");
    }

}
void draw_fig (int n)
{
    unsigned int i=0,temp=n-2,temp2=(n/2)-1;
    for(i=0; i<(n/2); i++)
    {
        printf("*");
        draw_spaces(temp);
        printf("*");
        printf("\n");
        draw_spaces(i+1);
        temp=temp-2;
    }

     printf("*\n");
     i=0;
     for(i=0; i<n-1; i=i+2)
    {
        draw_spaces(temp2);
        printf("*");
        draw_spaces(i+1);
        printf("*");
        printf("\n");
        temp2--;
    }

}
