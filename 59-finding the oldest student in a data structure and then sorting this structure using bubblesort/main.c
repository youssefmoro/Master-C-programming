#include <stdio.h>
#include <stdlib.h>
#include "oldeststudent.h"
int main()
{
      struct Student array[5]={{"yousef",26,'C'},{"ahmed",37,'A'},{"ahmed",32,'A'},{"ahmed",34,'A'},{"ahmed",39,'A'},{"ahmed",35,'A'}};
      int x=oldest(array,5);
    student_print_byref(&array[x]);
    bubble_sort_ascending(array,5);
      student_print_byref(&array[0]);
    return 0;
}
