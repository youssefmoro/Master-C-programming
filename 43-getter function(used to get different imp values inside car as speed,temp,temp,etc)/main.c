#include <stdio.h>
#include <stdlib.h>
int get_z(void)
{
    return z;
}
void inc_z(void)
{
    z++;
}

int get_speed(void)
{
    return speed;
}

int get_z_address(void)
{
    return &Z;
}
int main()
{
    printf("Hello world!\n");
    return 0;
}
