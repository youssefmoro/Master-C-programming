#include <stdio.h>
#include <stdlib.h>
#include "school.h"
std_t school[10];
int main()
{
    int i10;
    for(i10=0; i10<10; i10++)
    {
        school[i10].age=0;
        school[i10].grade='-';
        school[i10].ID=-1;
        school[i10].name[0]="blank";
        school[i10].number[0]=-1;
    }
    while(1)
    {
        int choice=0;
        printf("enter the number of your choice/n 1-add student 2-edit student 3-print student data 4-delete student 5-all school data 6-call student\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            int ID,i;
            for(i=0; i<10; i++)
            {
                if(school[i].ID==-1)
                {
                    ID=i;
                    school[i].ID=i;
                    break;
                }
            }

            printf("enter name\n");
            string_scan(school[ID].name,20);
            printf("enter AGE\n");
            scanf("%d",&school[ID].age);
            printf("enter grade\n");
            scanf(" %c",&school[ID].grade);
            printf("enter phone number one by one\n");
            phoneNumber_scan(school[ID].number,11);

        }
        else if(choice==2)
        {
            int input;
            printf("to enter his name enter 1,to enter his ID enter 2\n");
            scanf("%d",&input);
            if(input==1)
            {
                int i8=0,second_choice=20,flag=0;
                char Name[20];
                printf("please enter his name\n");
                string_scan(Name,20);
                for(i8=0; i8<10; i8++)
                {
                    if(string_compare(Name,school[i8].name))
                    {
                        flag=1;
                        while(second_choice)
                        {
                            printf("enter the number of your choice:1-name 2-age 3-grade 4-Number 5-ID when done enter 0\n");
                            scanf("%d",&second_choice);
                            if(second_choice==1)
                            {
                                printf("enter new name\n");
                                string_scan((school[i8].name),20);
                            }
                            else if(second_choice==2)
                            {
                                printf("enter new age\n");
                                scanf("%d",&(school[i8].age));
                            }
                            else if(second_choice==3)
                            {
                                printf("enter new grade\n");
                                scanf(" %c",&(school[i8].grade));
                            }
                            else if(second_choice==4)
                            {
                                printf("enter new phone number one by one\n");
                                phoneNumber_scan(school[i8].number,11);
                            }
                            /* else if(second_choice==5)
                             {
                                 printf("enter new ID\n");
                                 scanf("%d",&(school[i8].ID));
                             }*/
                            else if(second_choice==0)
                            {
                                break;
                            }
                            else
                            {
                                printf("wrong input\n");
                            }
                        }

                    }

                }
                if(flag==0)
                {
                    printf("Name not found\n");
                }

            }
            else if(input==2)
            {
                int i7=0,choice3=20,flag=0;
                int ID1=0;
                printf("please enter his ID\n");
                scanf("%d",&ID1);
                for(i7=0; i7<10; i7++)
                {
                    if((school[i7].ID)==ID1)
                    {
                        flag=1;
                        while(choice3)
                        {
                            printf("enter the number of your choice:1-name 2-age 3-grade 4-Number 5-ID when done enter 0\n");
                            scanf("%d",&choice3);
                            if(choice3==1)
                            {
                                printf("enter new name\n");
                                string_scan((school[i7].name),20);
                            }
                            else if(choice3==2)
                            {
                                printf("enter new age\n");
                                scanf("%d",&(school[i7].age));
                            }
                            else if(choice3==3)
                            {
                                printf("enter new grade\n");
                                scanf(" %c",&(school[i7].grade));
                            }
                            else if(choice3==4)
                            {
                                printf("enter new phone number one by one\n");
                                phoneNumber_scan(school[i7].number,11);
                            }
                            /*else if(choice3==5)
                            {
                                printf("enter new ID\n");
                                scanf("%d",&(school[i7].ID));
                            }*/
                            else if(choice3==0)
                            {
                                break;
                            }
                            else
                            {
                                printf("wrong input\n");
                            }
                        }

                    }

                }
                if(flag==0)
                {
                    printf("ID not found\n");
                }
            }
        }
        else if(choice==3)
        {
            int choice4=0,ID4;
            char Name2[20];
            printf("enter 1 to search by Name, 2 search by ID");
            scanf("%d",&choice4);
            if(choice4==1)
            {
                printf("please enter his name\n");
                string_scan(Name2,20);
                search_then_print_student_byName(school,Name2,10);
            }
            else if(choice4==2)
            {
                printf("please enter his ID\n");
                scanf("%d",&ID4);
                search_then_print_student_byID(school,ID4,10);
            }
            else
            {
                printf("wrong input\n");
            }

        }
        else if(choice==4)
        {
            int choice5=0,ID5,desired_index,i;
            char Name3[20];
            printf("enter 1 to delete from Name, 2 delete from ID");
            scanf("%d",&choice5);
            if(choice5==1)
            {
                printf("please enter his name\n");
                string_scan(Name3,20);
                desired_index=searchstudent_byName(school,Name3,10);
                if(desired_index==9)
                {
                    school[desired_index].age=0;
                    school[desired_index].grade='-';
                    school[desired_index].ID=-1;
                    school[desired_index].name[0]="blank";
                    school[desired_index].number[0]=-1;
                }
                else
                {
                    for(i=desired_index;i<9; i++)
                    {
                        printf("iam here");
                        shiftDown_structures_inArray(school,i);
                    }
                }
            }
            else if(choice5==2)
            {
                printf("please enter his ID\n");
                scanf("%d",&ID5);
                desired_index=search_student_byID(school,ID5,10);
                 if(desired_index==9)
                {
                    school[desired_index].age=0;
                    school[desired_index].grade='-';
                    school[desired_index].ID=-1;
                    school[desired_index].name[0]="blank";
                    school[desired_index].number[0]=-1;
                }
                else
                {
                    for(i=desired_index;i<9; i++)
                    {
                        printf("iam here");
                        shiftDown_structures_inArray(school,i);
                    }
                }
            }

            else
            {
                printf("wrong input\n");
            }

        }
    }
    return 0;
}
