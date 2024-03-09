#include <stdio.h>
#include <stdlib.h>

void print_arr (int *arr, int elements)
{
    unsigned char i;
    for (i=0;i<elements;i++)
    {
        printf("element%d=%d\n",i,*(arr+i));
    }
    printf("\n");
}
int main()
{
    int arr2[]={2001,2002,2005,2010,2020,2022,2023,2024};
    int arr1[6]={100,150,2,2224,202,0};
    print_arr(arr1,6);
    print_arr(arr2,8);
    return 0;
}
