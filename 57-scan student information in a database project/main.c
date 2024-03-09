#include <stdio.h>
#include <stdlib.h>
#include "student func.h"
int main()
{
    struct Student s1,s2;
    /*s1=scan_struct_by_value();
    student_print_byref(&s1);*/

    scan_struct_by_refrence(&s2);
    student_print_byref(&s2);

    return 0;
}
