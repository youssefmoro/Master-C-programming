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
void write_100array(int *array,int size)
{
    int i,value=0;
    for(i=0; i<=size; i++)
    {
        if(i==64)
        {
            value++;
            array[i]=value;
            value++;

        }
        else
        {
            array[i]=value;
            value++;
        }
    }
}
int find_number_within_array (int **array,int size)
{
    int i,loops=0,number;
    for(i=0;i<=size;i++)
    {
        int f=0,flag=0,l=size;
        int m;
        while(f<=l)
        {
            loops++;
            m=((f+l)/2);
            if(array[m]==i)
            {
                flag=1;
                break;
            }
            else if(array[m]>i)
            {
                l=m-1;
            }
            else
            {
                f=m+1;
            }
        }
        if (flag==0)
        {
            number=i;
        }
    }
    printf("loops used=%d",loops);
    return number;
}
int main()
{
    int array[100];
    write_100array(array,100);
    //print_arr(array,100);
    printf("number which not found=%d",find_number_within_array(array,100));

    return 0;
}
