#include <stdio.h>
#include <stdlib.h>
int array_sum(int *arr, int elements)
{
    unsigned long long sum=0;
    unsigned char i;
    for (i=0;i<elements;i++)
    {
     sum=sum+arr[i];//or sum=sum+*(sum+i);
    }
    return sum;

}
int main()
{
    int arr1[50]={1,2,1,2,1,2,1,2,1,2,1,2,1,2,1};
    int arr2[10]={0};
    printf("%d\n",array_sum(arr1,50));
    printf("%d\n",array_sum(arr2,10));
    return 0;
}
