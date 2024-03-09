#ifndef student_func_h
#define student_func_h
struct Student
{
    char name[20];
    int age;
    char grade;
};
void scan_struct_by_refrence(struct Student*s);
struct Student scan_struct_by_value(void);
void student_print_byref(const struct Student* h);
#endif // student_func_h
