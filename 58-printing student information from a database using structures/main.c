#include <stdio.h>
#include <stdlib.h>
#include "student.h"
int main()
{
    struct Student s1={"yousef",26,'C'};
    struct Student s2={"ahmed",34,'A'};
    student_print(s1);
    student_print(s2);
    struct Student array[20]={{"yousef",26,'C'},{"ahmed",34,'A'},{"ahmed",34,'A'},{"ahmed",34,'A'},{"ahmed",34,'A'},{"ahmed",34,'A'}};
    student_print(array[0]);
    student_print(array[1]);
    student_print(array[2]);
    student_print(array[3]);
    student_print(array[4]);
    array[2]=s1;
      student_print(array[2]);
      printf("\n....................................\n");
      student_print_byref((array+2));
      printf("\n....................................\n");
      array_of_structures_studenttype_print(array,6);
    return 0;
}

