#include <stdio.h>
#include <stdlib.h>
void print_arr (int *arr, int elements)
{
    unsigned int i;
    for (i=0; i<elements; i++)
    {
        printf("%d  ",*(arr+i));
    }
    printf("\n");
}
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
    printf("max=%d,min=%d\n",max,min);

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
int main()
{
     int arr3[]= {1,0,5,0,0,9,7,7,7,6,2,4,6,3,8,8};
    int arr4[]= {0,0,-1,-1,1,5,2,1};
    int size4=(sizeof(arr4)/sizeof(arr4[0]));
    int size3=(sizeof(arr3)/sizeof(arr3[0]));
    array_countsort_instructor(arr4,size4);
    print_arr(arr4,size4);
    return 0;
}
