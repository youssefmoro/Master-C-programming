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
void array_sort_assending(int*array,int size)
{
    int i,temp,j,c=0,sorted_flag=0;
    for(j=0; j<size; j++)
    {
        sorted_flag=1;
        for(i=0; i<size-1-j; i++)
        {
            c++;
            if(array[i]>array[i+1])
            {
                sorted_flag=0;
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
        if(sorted_flag==1)
        {
            break;
        }
    }
    printf("\n%d\n",c);
}
void array_sort_descending(int*array,int size)
{
    int i,temp,j,c=0,sorted_flag=0;
    for(j=0; j<size; j++)
    {
        sorted_flag=1;
        for(i=0; i<size-1-j; i++)
        {
            c++;
            if(array[i]<array[i+1])
            {
                sorted_flag=0;
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
        if(sorted_flag==1)
        {
            break;
        }
    }
    printf("\n%d\n",c);
}
void array_selectionsort_ascending(int*array,int size)
{
    int i,j,max,c=0,max_index=0,temp,last=size-1;
    for(j=0; j<size; j++)
    {
        max=array[0];
        max_index=0;
        for(i=0; i<=last; i++)
        {
            c++;
            if(array[i]>max)
            {
                max_index=i;
                max=array[i];
            }
        }
        temp=array[max_index];
        array[max_index]=array[last];
        array[last]=temp;
        last--;

    }
    printf("\n%d\n",c);
}
void array_selectionsort_descending(int*array,int size)
{
    int i,j,min,c=0,min_index=0,temp,last=size-1;
    for(j=0; j<size; j++)
    {
        min=array[0];
        min_index=0;
        for(i=0; i<=last; i++)
        {
            c++;
            if(array[i]<min)
            {
                min_index=i;
                min=array[i];
            }
        }
        temp=array[min_index];
        array[min_index]=array[last];
        array[last]=temp;
        last--;

    }
    printf("\n%d\n",c);
}

int array_max_search(int *array,int size)
{
    int i=0,max=array[i],max_index=0;
    for(i=0; i<size; i++)
    {
        if(array[i]>max)
        {
            max_index=i;
            max=array[i];
        }
    }
    return max_index;
}

void array_selectionsort_using_other_functions_call(int*array,int size)
{
    int max_index,i,last=size-1;
    for(i=0; i<size; i++)
    {
        max_index=array_max_search(array,last-i+1);
        swap(&array[max_index],&array[last-i]);
        //last--;
    }
}
void array_countsort(int*array,int size)
{
    int i,j,max_count=0,max=0,count_size_negative,count_size,min=0,min_negative=0,max_count_negative=0,x;
    for(i=0; i<size; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
    }
    count_size=max+1;//if needed to search between 2 numbers then we will add the min number to the equation like following
    count_size=max-min+1;
    int *freq1=(int*)calloc(count_size,sizeof(int));
    for(i=0; i<size; i++)
    {
        if(array[i]>=0)
        {
            freq1[array[i]]++;
        }
    }
    //......................................................................-ve
    for(i=0; i<size; i++)
    {
        if (array[i]<min_negative)
        {
            min_negative=array[i];
        }
    }
    i=0;
    count_size_negative=((min_negative*(-1))+1);
    int *freq2=(int*)calloc(count_size_negative,sizeof(int));
    for(i=0; i<size; i++)
    {
        if(array[i]<0)
        {
            x=array[i]*-1;
            freq2[x]++;
        }

    }
    i=0;
    //............................................setting array values
    for(i=0; i<(sizeof(freq2)/sizeof(freq2[0])); i++)
    {
        while(freq2[i])
        {
            array[j]=(i*(-1));
            freq2[i]--;
            j++;

        }
    }
    i=0;
    for(i=0; i<(sizeof(freq1)/sizeof(freq1[0])); i++)
    {
        while(freq1[i])
        {
            array[j]=i;
            freq1[i]--;
            j++;

        }

    }


}
void array_countsort_instructor(int*array,int size)
{
    int i,j=0,max=array[0],count_size=0,min=array[0];
    for(i=0; i<size; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
        if (array[i]<min)
        {
            min=array[i];
        }
    }

    count_size=max-min+1;
    int *freq=(int*)malloc(count_size*sizeof(int));
    for(i=0; i<size; i++)
    {
        freq[array[i]-min]++;
    }
    i=0;
    for(i=0; i<size; i++)
    {
        while(freq[i])
        {
            array[j]=i+min;
            freq[i]--;
            j++;
        }
    }

}
void array_countsort_mono(int*array,int size)
{
    int i,j=0,count[10]= {0};
    for(i=0; i<size; i++)
    {
        count[array[i]]++;
    }
    i=0;
    for(i=0; i<10; i++)
    {
        while(count[i])
        {
            array[j]=i;
            count[i]--;
            j++;
        }
    }


}
void swap (int *p1, int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main()
{

    int arr2[]= {-3,-4,-2,-1,0,1,3,4,7,8,9,10,6,30,20,80};
    int arr3[]= {1,0,5,0,0,9,7,7,7,6,2,4,6,3,8,8};
    int arr4[]= {-5,-8,-2,5,6,2,-1,0,4,3,2,1,1,1,-5,-3,-6,-6,-7,-4,0,0,0};
    int size4=(sizeof(arr4)/sizeof(arr4[0]));
    int size3=(sizeof(arr3)/sizeof(arr3[0]));
    //int size1 =(sizeof(arr1)/sizeof(arr1[0]));
    int size2 =(sizeof(arr2)/sizeof(arr2[0]));
    /*print_arr(arr2,size2);
    array_sort_assending(arr2,size2);
    print_arr(arr2,size2);
    array_sort_descending(arr2,size2);
    print_arr(arr2,size2);
    array_selectionsort_ascending(arr2,size2);
    print_arr(arr2,size2);
    array_selectionsort_descending(arr2,size2);
    print_arr(arr2,size2);
    printf("index of max=%d\n",array_max_search(arr2,size2));
    array_selectionsort_using_other_functions_call(arr2,size2);
    print_arr(arr2,size2);
    array_countsort_mono(arr3,size3);
    print_arr(arr3,size3);*/
    array_countsort(arr3,size3);
    print_arr(arr3,size3);
    return 0;
}

