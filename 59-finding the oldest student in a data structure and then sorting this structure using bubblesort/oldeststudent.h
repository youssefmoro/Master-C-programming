#ifndef oldest_student
#define oldest_student
struct Student
{
    char name[20];
    int age;
    char grade;
};

int oldest(struct Student*array1 ,int size1);
void student_print_byref(const struct Student*h);

#endif // oldest_student
