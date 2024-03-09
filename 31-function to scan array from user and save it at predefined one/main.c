#include <stdio.h>
#include <stdlib.h>
void arr_print (int *arr, int elements)
{
    unsigned char i;
    for (i=0;i<elements;i++)
    {
        printf("element%d=%d\n",i,*(arr+i));
    }
    printf("\n");
}

int  arr_scan (unsigned int *array, unsigned int Max_Size)
{
    unsigned int i,elements;
    printf("please enter number of elements of array not more than %d\n",Max_Size);
     scanf("%d",&elements);
     unsigned int arr[elements];
    for(i=0;i<elements&&i<Max_Size;i++)
    {
        printf("please enter element %d\n",i);
        scanf("%d",&arr[i]);// or scan at (arr+i)
        *(array+i)=arr[i];
    }
    return Max_Size;

}
int main()
{
    unsigned int arr1[10]={0};//مشكلة الحل ده اني حاجز اماكن كتير زيادة عن الحاجة او اقل منها لو دخلت ايلمينتس اكتر من 100
    unsigned int size;
    size=arr_scan(&arr1,10);
    arr_print(arr1,size);
    return 0;
}
