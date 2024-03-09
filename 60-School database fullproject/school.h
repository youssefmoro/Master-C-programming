#ifndef school_h
#define school_h
typedef struct Student
{
    char name[20];
    int age;
    char grade;
    int number[11];
    int ID;
}std_t;
int string_compare(char *str1,char *str2);
void string_scan(char *string,char size);
void phoneNumber_scan (int *array, int size);
void arr_print (int *arr, int elements);
void string_print(char *str);
void shiftDown_structures_inArray(std_t *school,int index);
int search_student_byID(std_t *school,int ID,int struct_size);
int searchstudent_byName(std_t *school,char *name,int struct_size);
int search_then_print_student_byID(std_t *school,int ID,int struct_size);
int search_then_print_student_byName(std_t *school,char *name,int struct_size);
#endif // school_h
