#include <stdio.h>
#include <stdlib.h>
typedef enum
{
    SATURDAY,
    SUNDAY,
    TUESDAY,
    WEDNESDAY=8,
    THURSDAY,
    FRIDAY,
} day_t;

day_t func_days(day_t day)
{
    switch(day)
    {
    case SATURDAY:
        printf("SATURDAY");
    case SUNDAY:
        printf("SUNDAY");
    case TUESDAY:
        printf("MONDAY");
    case WEDNESDAY:
        printf("MONDAY");
    case THURSDAY:
        printf("MONDAY");
    case FRIDAY:
        printf("MONDAY");
    }
}
int main()
{
    day_t today=FRIDAY;
    day_t tommorrow=today-1;
    printf("%d\n",tommorrow);

    if(tommorrow==9)
    {
        printf("you understand enum %d=5\n",today-5);
    }
    else
    {
        printf("%d\n",tommorrow);
    }
    //printf("Hello world!\n");
    func_days(today);
    return 0;
}
