#include <stdio.h>
#include <stdlib.h>
int  arr_scan (unsigned int *array, unsigned int Max_Size)
{
    unsigned int i,elements;
    printf("please enter number of elements of array not more than %d\n",Max_Size);
    scanf("%d",&elements);
    unsigned int arr[elements];
    for(i=0; i<elements&&i<Max_Size; i++)
    {
        printf("please enter element %d\n",i);
        scanf("%d",&arr[i]);// or scan at (arr+i)
        *(array+i)=arr[i];
    }
    return Max_Size;

}
void arr_print (int *arr, int elements)
{
    unsigned char i;
    for (i=0; i<elements; i++)
    {
        printf("element%d=%d\n",i,*(arr+i));
    }
    printf("\n");
}
void arr_swap_reverse(int *arr1,int *arr2,int elements1, int elements2)
{
    unsigned int i,odd;
    if (elements2>elements1)
    {
        elements1=elements1+elements2;
        elements2=elements1-elements2;
        elements1=elements1-elements2;
    }
   /* if((elements2)%2)
    {
        odd=elements2/2;
        arr1[odd]=arr2[odd]+arr1[odd];
        arr2[odd]=arr1[odd]-arr2[odd];
        arr1[odd]=arr1[odd]-arr2[odd];
    }
    */
    unsigned int rev=elements2-1;
    for(i=0; i<elements2; i++)
    {
        arr1[i]=arr2[rev]+arr1[i];
        arr2[rev]=arr1[i]-arr2[rev];
        arr1[i]=arr1[i]-arr2[rev];
        rev--;
    }

}
int main()
{
    unsigned int array1[8]= {1,2,3,4,5};
    unsigned int array2[5]= {10,20,30,40,50};
    //unsigned int array3[100];
    //unsigned int size= arr_scan(array3,100);
    //arr_swap(array1,array2,8,5);
    arr_swap_reverse(array1,array2,8,5);
    arr_print(array1,8);
    //arr_print(array2,8);
    arr_print(array2,8);
    return 0;
}
