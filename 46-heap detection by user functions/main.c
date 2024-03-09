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
int *array_ScanDynamic (void)
{
    int size;
    printf("enter total number\n");
    scanf("%d",&size);
    unsigned int i;
    //int *arr=malloc(size*sizeof(int));//this shape will implicit cast the void ptr address returned by malloc before assigning to int arr
    int *arr=(int*)malloc(size*sizeof(int));//the right shape to run away from copiler implicit casting
    if (arr==0)
    {
        return 0;
    }
    for(i=0;i<size;i++)
    {
        printf("please enter element with index %d\n",i);
        scanf("%d",&arr[i]);// or (arr+i)
    }
     arr_print(arr,size);
     //free(arr);//with this you will return an adrress that points to unkonwn data=dangling pointer
    // arr_print(arr,size);
    return arr;
}
int *func2(void)
{
    int x=50;

    return &x;
}
int main()
{
    //int *p=array_ScanDynamic();
    //arr_print(p,5);
    //free(p);
    //arr_print(p,5);
 //int *p2=array_ScanDynamic();
 //printf("%d           %d",p,p2);
 //int *x=func2();
// printf("%d\n",x);//it will return 0 as address of a dangling is zero automatically for safety wises
 //printf("%d\n",*x);//it will give a run time error as ur trying to print data that changes automatically
 //..........................................................................................
 int x=300;
 void *p=&x;
 printf("%d ",*(int*)p);
  printf("%d ",*(char*)p);
//...........................................................................................
int *p5=calloc(10,4);
 arr_print(p5,10);
    return 0;
}
