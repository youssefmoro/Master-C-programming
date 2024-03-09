#include "school.h"
//int search_student_byName(int *string)

void phoneNumber_scan (int *array, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);// or scan at (arr+i)
    }

}
void string_scan(char *string,char size)
{
    char i;
    for(i=0;i<size;i++)
    {
        scanf(" %c",(string+i));
        if(string[i]=='0')
        {
            string[i]=0;
            return;
        }
    }

}
void string_print(char *str)
{
    unsigned char i;
    for(i=0; str[i]; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}
int string_compare(char *str1,char *str2)
{
     unsigned char i;
     int flag=1;
    for(i=0; str1[i]||str2[i]; i++)
    {
        if(str1[i]!=str2[i])
        {
            flag=0;
            break;
        }
    }
    return flag;

}
void arr_print (int *arr, int elements)
{
    unsigned char i;
    for (i=0;i<elements;i++)
    {
        printf("%d",*(arr+i));
    }
    printf("\n");

}
int search_then_print_student_byName(std_t *school,char *name,int struct_size)
{
    int i;
    for(i=0;i<struct_size;i++)
    {
        if(string_compare((school[i].name),name))
        {
            printf("age=%d\nID=%d\ngrade=%c\n",school[i].age,school[i].ID,school[i].grade);
            arr_print(school[i].number,11);
            string_print(school[i].name);

        }
    }
}
int search_then_print_student_byID(std_t *school,int ID,int struct_size)
{
    int i;
    for(i=0;i<struct_size;i++)
    {
        if((school[i].ID)==ID)
        {
            printf("age=%d\nID=%d\ngrade=%c\n",school[i].age,school[i].ID,school[i].grade);
            arr_print(school[i].number,11);
            string_print(school[i].name);
        }
    }
}
int searchstudent_byName(std_t *school,char *name,int struct_size)
{
    int i;
    for(i=0;i<struct_size;i++)
    {
        if(string_compare((school[i].name),name))
        {
         return i;
        }
    }
}
int search_student_byID(std_t *school,int ID,int struct_size)
{
    int i;
    for(i=0;i<struct_size;i++)
    {
        if((school[i].ID)==ID)
        {
         return i;
        }
    }
}
void shiftDown_structures_inArray(std_t *school,int index)
{
    int i;
    (school[index].age)=(school[index+1].age);
    (school[index].grade)=(school[index+1].grade);
    (school[index].ID)=(school[index+1].ID);
    for(i=0;(school[index+1].name[i]);i++)
    {
        (school[index].name[i])=(school[index+1].name[i]);
    }
    for(i=0;i<11;i++)
    {
        (school[index].number[i])=(school[index+1].number[i]);
    }
}

