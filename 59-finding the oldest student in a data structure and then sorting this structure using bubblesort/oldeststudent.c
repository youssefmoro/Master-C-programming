#include "oldeststudent.h"
int oldest(struct Student*array1 , int size1)
{
    int i,index_max,max=0;
    for(i=0;i<size1;i++)
    {
        if((array1[i].age)>max)
        {
            max=(array1[i].age);
            index_max=i;
        }
    }
    return index_max;
}
void student_print_byref(const struct Student* h)
{
    printf("name=%s age=%d grade=%c\n",((*h).name),((*h).age),((*h).grade));
     //printf("name=%s age=%d grade=%c",(h->name),(h->age),(h->grade));
}
void bubble_sort_ascending(struct Student *array,int size)
{
    int i,temp,j,sorted_flag=0;
    for(j=0; j<size; j++)
    {
        sorted_flag=1;
        for(i=0; i<size-1-j; i++)
        {

            if(array[i].age>array[i+1].age)
            {
                sorted_flag=0;
               swap_student(array+i,array+i+1);
            }
        }
        if(sorted_flag==1)
        {
            break;
        }
    }
}
void swap_student(struct Student *s1,struct Student *s2)
{
    struct Student temp;
    temp=*s1;
    *s1=*s2;
    *s2=temp;
}
