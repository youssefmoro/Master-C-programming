#include "student.h"

void student_print(struct Student h)
{
    printf("name=%s age=%d grade=%c",h.name,h.age,h.grade);
}
void student_print_byref(const struct Student* h)
{
    printf("name=%s age=%d grade=%c\n",((*h).name),((*h).age),((*h).grade));
     printf("name=%s age=%d grade=%c",(h->name),(h->age),(h->grade));
}
void array_of_structures_studenttype_print(const struct Student*array,int size)
{
   int i;
   printf("name    age   grade\n");
   for(i=0;i<size;i++)
   {
        printf("%5s  %3d    %2c\n",(&array[i])->name,(&array[i])->age,(&array[i])->grade);
   }
}
