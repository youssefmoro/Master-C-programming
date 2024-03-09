#include <stdio.h>
#include <stdlib.h>

void print_arr (int *arr, int elements)
{
    unsigned int i ;
    for (i=0; i<elements; i++)
    {
        printf("element%d=%d\n",i,*(arr+i));
    }
    printf("\n");
}

int binary_search(int *arr,int size,int n)
{
    int f=0,l=size-1,c=0;
    int m;

    while(f<=l)
    {
        c++;//no of loops used to find our number
        printf("c%d\n",c);
        m=((f+l)/2);
        if(arr[m]==n)
        {
            return m;
        }
        else if(arr[m]>n)
        {
            l=m-1;
        }
        else
        {
            f=m+1;
        }
    }
    return -1;
}
int main()
{
    while(1)
    {
        int n1=0;
        int arr1[]= {1,1,1,1,1,3,3,3,4,4,4,4,4,4,4,5,5,5,6,6,7,8,9,10,10,10};
        int size =(sizeof(arr1)/sizeof(arr1[0]));
        print_arr(arr1,size);
        printf("please enter a number to search for\n");
        scanf("%d",&n1);
        int result=binary_search(arr1,size,n1);
        if(result==-1)
        {
            printf("not in the array\n");
        }
        else
        {
            printf("it's on index %d of the array\n",result);
        }
    }
    return 0;
}
