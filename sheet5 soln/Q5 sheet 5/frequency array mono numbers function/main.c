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
int frequency_array(int *arr,int size,int*n)
{
    int i,freq[10]= {0},max_count=0;
    for(i=0; i<size; i++)
    {
        freq[arr[i]]++;
    }
    for(i=0; i<10; i++)
    {
        if(freq[i]>max_count)
        {
            max_count=freq[i];
            *n=i;
        }
    }
    return max_count;
}
int frequency_array2(int *arr,int size,int*n)
{
    int i,max_count=0,max=0,count_size,min=0;
    for(i=0; i<size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    count_size=max+1;//if needed to search between 2 numbers then we will add the min number to the equation like following
    count_size=max-min+1;
    int *freq=(int*)calloc(count_size,sizeof(int));
    for(i=0; i<size; i++)
    {
        freq[arr[i]]++;
    }
    for(i=0; i<count_size; i++)
    {
        if(freq[i]>max_count)
        {
            max_count=freq[i];
            *n=i;
        }
    }
    for(i=0; i<count_size; i++)
    {
        printf("%d    %d\n",i,freq[i]);
    }
    return max_count;
}
int frequency_array3(int *arr,int size,int*n,int*n_negative)
{
    int i,max_count=0,max=0,count_size_negative,count_size,min=0,min_negative=0,max_count_negative=0,x;
    for(i=0; i<size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    count_size=max+1;//if needed to search between 2 numbers then we will add the min number to the equation like following
    count_size=max-min+1;
    int *freq1=(int*)calloc(count_size,sizeof(int));
    for(i=0; i<size; i++)
    {
        if(arr[i]>=0)
        {
            freq1[arr[i]]++;
        }
    }
    for(i=0; i<count_size; i++)
    {
        if(freq1[i]>max_count)
        {
            max_count=freq1[i];
            *n=i;
        }
    }
    for(i=0; i<count_size; i++)
    {
        printf("%d    %d\n",i,freq1[i]);
    }
    //............................................................................ -ve
    for(i=0;i<size; i++)
    {
        if (arr[i]<min_negative)
        {
            min_negative=arr[i];
        }
    }
    count_size_negative=((min_negative*(-1))+1);
    int *freq2=(int*)calloc(count_size_negative,sizeof(int));
    for(i=0; i<size; i++)
    {
        if(arr[i]<0)
        {
            x=arr[i]*-1;
            freq2[x]++;
        }

    }
    for(i=0; i<count_size_negative; i++)
    {
        if(freq2[i]>max_count_negative)
        {
            max_count_negative=freq2[i];
            *n_negative=(i*(-1));
        }
    }
    for(i=0; i<count_size_negative; i++)
    {
        printf("%d    %d\n",i,freq2[i]);
    }
    if(max_count>=max_count_negative)
    {

        return max_count;
    }
    else
    {
         *n=*n_negative;
        return max_count_negative;
    }

}
int main()
{
    /*int n1,n2;
    //int arr1[]= {1,1,1,1,1,1,1,1,1,1,1,3,3,3,4,4,4,4,4,4,4,5,5,5,6,6,7,8,9,10,10,10};
    int arr2[]= {1,1,1,1,3,3,3,4,4,4,4,5,5,5,6,6,7,8,9,10,10,10,5,6,20,30,20,2,20,2,20,20,20};
    //int size1 =(sizeof(arr1)/sizeof(arr1[0]));
    int size2 =(sizeof(arr2)/sizeof(arr2[0]));
    //int max=frequency_array(arr1,size1,&n1);
    int max2=frequency_array2(arr2,size2,&n2);
    //printf("max count=%d   number=%d",max,n1);
    printf("max count=%d   number=%d",max2,n2);*/
    //.............................................................................
    int n3,n_negative;
    int arr3[]= {-3,-3,-3,-3,-3,-3,-3,-2,-1,1,0,0,0,1,1,1,1,3,3,3,4,4,4,4,5,6,6,7,8,9,10,10,10,5,6,20};
    int size3 =(sizeof(arr3)/sizeof(arr3[0]));
    int max3=frequency_array3(arr3,size3,&n3,&n_negative);
    printf("max count=%d   number=%d",max3,n3);
    return 0;
}
