#include <stdio.h>
#include <stdlib.h>

int array_search(int arr[],int number,int *elements)
{
    unsigned char i=0;
    for(i=0; i<elements; i++)
    {
        if(arr[i]== number)
        {
            *elements=i+1;
            return 1;
        }
    }
    return 0;

}
int main()
{
    unsigned int arr1[5]={5,15,20,15,3},x=5;
    unsigned int *elements_ptr=&x;
    if(array_search(arr1,15,elements_ptr))
    {
        printf("exists at element%d",*elements_ptr);
    }
    else
    {
        printf("it doesn't exist");
    }

    return 0;
}
