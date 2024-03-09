#include <stdio.h>
#include <stdlib.h>
void arr_print (int *arr, int elements)
{
    unsigned char i;
    for (i=0;i<elements;i++)
    {
        printf("element%d=%d\n",i,*(arr+i));
    }
    printf("\n");
}
void arr_reverse (int *array, int elements)
{
    unsigned int i,rev=elements-1;
    for(i=0; i<elements/2; i++)
    {
        array[i]=array[rev]+array[i];
        array[rev]=array[i]-array[rev];
        array[i]=array[i]-array[rev];
        rev--;
    }
}
int main()
{
    unsigned int arr[5]={1,2,3,4,5};
    arr_reverse(arr,5);
    arr_print(arr,5);
    return 0;
}
