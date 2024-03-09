#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("Please enter your grade as a number percentage \n");
    scanf("%d",&grade);
    if (grade>100||grade<0)
    {
        printf("please enter a valid number");
    }
    else
    {

        if (grade>=90)
        {
            printf("your score is %d=A ",grade);
        }
        else if (grade<90&&grade>=80)
        {
            printf("your score is %d=B ",grade);
        }
        else if (grade<80&&grade>=70)
        {
            printf("your score is %d=C+ ",grade);
        }
        else if (grade<70&&grade>=60)
        {
            printf("your score is %d=C ",grade);
        }
        else if (grade<60&&grade>=50)
        {
            printf("your score is %d=D ",grade);
        }
        else
        {
            printf("failed exam");
        }
    }


    return 0;


}
