#include <stdio.h>
#include <stdlib.h>
int longest_consecutive (int*array,int size,int number)
{
    unsigned int i,count=0,max=0;
    for(i=0; i<size; i++)
    {
        if(array[i]==number)
        {
            count++;
        }
        else
        {
            if(count>max)
            {
                max=count;
                count=0;
            }
        }
    }
    return max;
}

int main()
{
    int arr[]= {1,2,2,3,3,3,3,4,4,4,4,3,3,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("%d",longest_consecutive(arr,size,3));
    return 0;
}
