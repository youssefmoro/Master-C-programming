#include <stdio.h>
#include <stdlib.h>
int most_repeated (int *array,int size,int*repeat)
{
    unsigned int i,j,count,max_count,max_n;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {

            if(array[i]==array[j])
            {

                count++;
                if(count>=max_count)
                {

                    max_count=count;
                    max_n=array[i];
                    *repeat=max_count;
                }
            }
        }
    }

    return max_n;
}
int main()
{
    unsigned int size1=0,repeat=0;
    int arr[]={1,8,5,5,6,3,2,8};
   size1=sizeof(arr)/sizeof(arr[0]);
    printf("max n=%d with count=%d",most_repeated(arr,size1,&repeat),repeat);
    return 0;
}
