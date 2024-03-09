#include <stdio.h>
#include <stdlib.h>
void print_arr (int *arr, int elements)
{
    unsigned char i;
    for (i=0; i<elements; i++)
    {
        printf("element%d=%d\n",i,*(arr+i));
    }
    printf("\n");
}
int array_merge(int *arr1,int s1,int*arr2,int s2,int *n_size)
{
    unsigned int size,corner=s1+s2;
    size=s1>s2?s2:s1;
    size=size*2;
    unsigned int i,j=0;
    int *p=(int*)malloc(corner*sizeof(int));
    if(p==0)
    {
        *n_size=0;
        return 0;
    }
    for(i=0; i<size; i=i+2)
    {
        p[i]=arr1[j];
        p[i+1]=arr2[j];
        j++;
    }
    if(s1==s2)
    {
        *n_size=size;
        return p;
    }
    else if(s2>s1)
    {
        for(i=i; i<corner; i++)
        {
            p[i]=arr2[j];
            j++;
        }
    }
    else
    {
        for(i=i; i<corner; i++)
        {
            p[i]=arr1[j];
            j++;
        }
    }
    *n_size=corner;
    return p;

}
void merge_arrays(int *array1,int size1,int *array2,int size2,int*new_array)
{
    unsigned int i,new_size,j;
    new_size=size1+size2;
    for(i=0; i<size1; i++)
    {
        new_array[i]=array1[i];
    }
    j=i;
    i=0;
    for(i=0; i<size2; i++)
    {
        new_array[j]=array2[i];
        j++;
    }

}
int main()
{
    unsigned int size1=0,size2=0,new_size=0;
    int arr1[]= {1,2};
    size1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]= {11,12,13,14,15};
    size2=sizeof(arr2)/sizeof(arr2[0]);
    int *p=array_merge(arr1,size1,arr2,size2,&new_size);
    print_arr(p,new_size);
    free(p);
    print_arr(p,new_size);
    return 0;
}
