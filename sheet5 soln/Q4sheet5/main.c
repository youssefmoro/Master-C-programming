#include <stdio.h>
#include <stdlib.h>
int find_number_not_repeated_in_sortedArray(int *array,int size)
{
    int i,number,loops=0;
    for(i=0; i<size-1; i=i+2)
    {
        loops++;
        if(array[i]!=array[i+1])
        {

            number=array[i];
            printf("loops=%d ,  not repeated number=%d\n",loops,number);
            return number;
        }
    }
}
int main()
{
    int arr[]= {1,1,2,2,4,4,70,70,73,80,80,81,81};
    int size=sizeof(arr)/sizeof(arr[0]);
    find_number_not_repeated_in_sortedArray(arr,size);
    return 0;
}
