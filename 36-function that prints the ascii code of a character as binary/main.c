#include <stdio.h>
#include <stdlib.h>

void print_binary (unsigned char n)
{
    signed char i;
    for(i=7; i>=0; i--)
    {
        printf("%d",((n>>i)&1));
    }
}
int main()
{
    unsigned char n1;
    printf("Enter number\n");
    scanf("%hhu",&n1);
    print_binary(n1);
    return 0;
}
