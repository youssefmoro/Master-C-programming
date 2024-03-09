#include <stdio.h>
#include <stdlib.h>
int arr_search (int *array , int number, int elements,int *ptr_index)
{
    unsigned int i,count=0;
    signed long long index = -1;
    for(i=0;i<elements;i++)
    {
        if(array[i]==number)
        {
            index=i;
            count++;
        }
    }
    if (index==-1)
    {
        printf("notfound");
    }
    else
    {
        *ptr_index=index;
        //printf("last index with this number inside =%d",index);
    }
    return count;

}
int main()
{
    unsigned int size=0;
    unsigned int ptr_index1;
    unsigned int array[]={1,1,1,1,2,2,1,3,5,5,6,3,5,3,5,2,1,1,2,3,5};
    size=sizeof(array)/sizeof(array[0]);
    unsigned int count=arr_search(array,2,size,&ptr_index1);
    printf("last index found=%d\ncount of number inside array=%d",ptr_index1,count);
    return 0;
}
