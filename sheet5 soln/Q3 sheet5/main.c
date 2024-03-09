#include <stdio.h>
#include <stdlib.h>
void array_countsort_instructor(int*array,int size)
{
    int i,j=0,max=array[0],count_size=0,min=array[0];
    for(i=0; i<size; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
        if (array[i]<min)
        {
            min=array[i];
        }
    }
    count_size=max-min+1;
    int *freq=(int*)calloc(count_size,sizeof(int));
    for(i=0;i<size; i++)
    {
        freq[array[i]-min]++;
    }
    i=0;
    for(i=0;i<count_size; i++)
    {
        while(freq[i])
        {
            array[j]=i+min;
            freq[i]--;
            j++;
        }
    }

}
int find_number_notNepeated_within_array (int *array,int size)
{
    int i,loops=0,number;
    array_countsort_instructor(array,size);
    for(i=0;i<size-1;i=i+2)
    {
        if(array[i]!=array[i+1])
        {
            number=array[i];
            printf("not repeated number=%d\n",number);
            return number;
        }
    }

}
void print_arr (int *arr, int elements)
{
    unsigned char i;
    for (i=0; i<elements; i++)
    {
        printf("element%d=%d\n",i,*(arr+i));
    }
    printf("\n");
}

int main()
{
    int arr[]={1,2,4,66,2,1,500,66,7,7,500};
    int size=sizeof(arr)/sizeof(arr[0]);
    //find_number_notNepeated_within_array(arr,size);
    find_number_notNepeated_within_array(arr,size);
    return 0;
}
