#include <stdio.h>
#include <stdlib.h>
int find_number_repeated_within_array (int *array,int size)
{
    int i,loops=0,number;
    for(i=1; i<=size; i++)
    {
        int f=0,l=size;
        int m,count=0;
        while(f<=l)
        {
            loops++;
            m=((f+l)/2);
            if(array[m]==i&&count<2)
            {
                count++;
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
        if(count==2)
        {
            printf("loops used=%d",loops);
            return i;
        }

    }

}
void write_100array(int *array,int size)
{
    int i,value=0;
    for(i=0; i<=size; i++)
    {
        array[i]=value;
    }
    array[50]=44;
}
int main()
{
    int array[101];
    write_100array(array,101);
    printf("number repeated=%d",find_number_repeated_within_array(array,100));
    return 0;
}
