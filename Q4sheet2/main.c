#include <stdio.h>
#include <stdlib.h>
void print_arr (int *arr, int elements)
{
    unsigned char i;
    for (i=0;i<elements;i++)
    {
        printf("element%d=%d\n",i,*(arr+i));
    }
    printf("\n");
}
void arr_bet2 (int *array, int n1, int n2)
{
    unsigned int i,offset;
    if(n2>n1)
    {
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    offset=n2+1;
    for(i=0;i<(n1-n2-1);i++)
    {
        array[i]=offset;
        offset++;
    }

}
int main()
{
    unsigned int n1=0,n2=0,arr1[10];
    printf("enter n1 then n2\n");
    scanf("%d%d",&n1,&n2);
    arr_bet2(arr1,n1,n2);
    print_arr(arr1,10);
    return 0;
}
