#include "student func.h"
void scan_struct_by_refrence(struct Student*s)
{
    printf("please enter name, age then grade\n");
    scanf("%s%d %c",&(s->name),&(s->age),&(s->grade));
}

struct Student scan_struct_by_value(void)
{
    struct Student s;
     printf("please enter name, age\n");
      scanf("%s%d",&s.name,&s.age);
       printf("please enter grade\n");
       scanf(" %c",&s.grade);
      return s;
}
void student_print_byref(const struct Student* h)
{
    printf("name=%s age=%d grade=%c\n",((*h).name),((*h).age),((*h).grade));
     printf("name=%s age=%d grade=%c",(h->name),(h->age),(h->grade));
}
