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
int*arr_removeRepeated(int*arr,int size,int*new_size)
{
    int i,k,flag=1,j=0;
    int*new_arr=malloc(size*sizeof(int));
    for(i=0; i<size; i++)
    {
        flag=1;
        for(k=0; k<size; k++)
        {
            if(arr[i]==arr[k])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            new_arr[j]=arr[i];
            j++;
        }
    }

    *new_size=j;
    new_arr=realloc(new_arr,j*4);
    return new_arr;
}
int arr_mostRepeated(int*arr,int size,int*p_num,int*n_loops)
{
    int i,j,count=0,max=0,looping_counter=0;

    for(i=0; i<size; i++)
    {
        count=0;
        for(j=0; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
            looping_counter++;
        }
        if(count>max)
        {
            max=count;
            *p_num=arr[i];
        }
    }
    *n_loops=looping_counter;

    return count;
}
int arr_mostRepeated_sorted(int*arr2,int size2,int*p2_num,int*n2_loops)
{
    int i,count=0,max=0,looping_counter=0;

    for(i=0; i<size2-1; i++)
    {

        if(arr2[i]==arr2[i+1])
        {
            count++;
        }
        else
        {
            count=0;
        }


        if(count>=max)
        {
            max=count;
            *p2_num=arr2[i];
        }
        looping_counter++;

    }
    *n2_loops=looping_counter;

    return max+1;
}
int main()
{
    int p_num,c,n_looping,c2,n2_looping,p2_num;
    //int arr1[]= {1,2,1,2,1,3,4,6,5,3,4,2,3,1,5,2,3,5,6,7,5,5,5,5,5,5,5,5,5,5,5,5,5};
    int arr2[]= {1,1,1,1,1,1,2,2,2,3,3,3,3,3,3,3,3,4,5,5,6,6,6,7,7,7,8,8,8,8,8,8,8,8,8,8,8,8,8};
    //int size1= sizeof(arr1)/sizeof(arr1[0]);
    int size2= sizeof(arr2)/sizeof(arr2[0]);
    //print_arr(arr1,size1);
    //c= arr_mostRepeated(arr1,size1,&p_num,&n_looping);
    c2=arr_mostRepeated_sorted(arr2,size2,&p2_num,&n2_looping);

    // print_arr(arr1,p_num);
    // printf("reptition=%d  number=%d looping=%d  ",c,p_num,n_looping);
    printf("reptition=%d  number=%d looping=%d  ",c2,p2_num,n2_looping);
    return 0;
}
