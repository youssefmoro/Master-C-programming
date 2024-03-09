#include <stdio.h>
#include <stdlib.h>
int frequency_array2(int *arr,int size,int*n)
{
    int i,max_count=0,max=arr[0],count_size,min=arr[0],min_count=0;
    for(i=0; i<size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
                if (arr[i]<min)
        {
            min=arr[i];
        }
    }

    count_size=max-min+1;
    int *freq=(int*)calloc(count_size,sizeof(int));
    for(i=0; i<size; i++)
    {
        freq[arr[i]-min]++;
    }
    for(i=0; i<count_size; i++)
    {
        if(freq[i]>max_count)
        {
            max_count=freq[i];
            *n=i+min;
        }
    }
    for(i=0; i<count_size; i++)
    {
        printf("%d    %d     %d\n",i,i+min,freq[i]);
    }
    free(freq);
    return max_count;
}
int main()
{
     int n1,n2;
    //int arr1[]= {1,1,1,1,1,1,1,1,1,1,1,3,3,3,4,4,4,4,4,4,4,5,5,5,6,6,7,8,9,10,10,10};
    int arr2[]= {-4,-4,-4,-4,-4,-4,-4,-4,-4,-4,-4,-3,-3,-3,-3,-3,-3,-2,-2,-2,-2,-1,0,0,0,1,1,1,1,3,3,3,4,4,4,4,5,5,5,6,6,7,8,9,10,10,10,5,6,20,30,20,2,20,2,20,20,20};
    //int size1 =(sizeof(arr1)/sizeof(arr1[0]));
    int size2 =(sizeof(arr2)/sizeof(arr2[0]));
    //int max=frequency_array(arr1,size1,&n1);
    int max2=frequency_array2(arr2,size2,&n2);
    //printf("max count=%d   number=%d",max,n1);
    printf("max count=%d   number=%d",max2,n2);
    return 0;
}
