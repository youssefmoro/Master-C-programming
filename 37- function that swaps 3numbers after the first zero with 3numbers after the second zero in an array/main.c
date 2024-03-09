#include <stdio.h>
#include <stdlib.h>
void print_arr (int *arr, int elements)
{
    unsigned char i1;
    for (i1=0; i1<elements; i1++)
    {
        printf("%d ",*(arr+i1));
    }
    printf("\n");
}
void arr_3no_swap(unsigned int *array)
{
    unsigned int i,flag=0,first_zero_index,second_zero_index=0,temp;
    for(i=0;; i++)
    {
        if(array[i]==0&&flag==0)
        {
            first_zero_index=i;
            flag++;
        }
        else if(array[i]==0&&flag==1)
        {
            second_zero_index=i;
            flag++;
            break;
        }
    }
    if((second_zero_index-first_zero_index)<=3||second_zero_index==0)
    {
        printf("not applicable\n");
    }
    else
    {
        i=1;
        for(i=1; i<=3; i++)
        {
            temp=array[first_zero_index+i];
            array[first_zero_index+i]=array[second_zero_index+i];
            array[second_zero_index+i]=temp;
            //array[first_zero_index+i]= (array[second_zero_index+i] + array[first_zero_index+i]);
            // array[second_zero_index+i]= (array[first_zero_index+i] - array[second_zero_index+i]);
            //array[first_zero_index+i]= (array[[first_zero_index+i] - array[second_zero_index+i]);
        }

    }

}
int main()
{
    unsigned int arr[]= {3,4,5,4,32,67,3,0,7,33,4,3,6,3,6,3,67,0,13,6,9,3,5,66,44};
    unsigned int size=sizeof(arr)/sizeof(arr[0]);
    print_arr(arr,size);
    printf("\n");
    arr_3no_swap(arr);
    print_arr(arr,size);
    return 0;
}
