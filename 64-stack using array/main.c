#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
/*int main()
{
    stack_type s1,s2,s3;
    s1=create_stack(10);
    s2=create_stack(5);
    s3=create_stack(5);
    push(&s1,5);
    push(&s2,50);
    return 0
}*/
int main()
{
    while(1)
    {
        STACK s1=0,s2=0,s3=0;
        s1=create_stack(10);
        s2=create_stack(5);
        s3=create_stack(5);
       // push(&s1,5);
       push(s1,5); // وهلغي بقي الادريس لاني ببعت لبوش عنوان ستراكت متشال في بوينتار فعلا اسمه اس وان وهكذا
        //push(&s2,50);
         push(s2,50);
          printf(" s2 before freeing=%d\n",*s2);
           printf(" s2 adress before freeing=%d\n",s2);
           stack_delete(s2);
         printf(" s2 after freeing dangling pointer unpredicted value or behaviour=%d\n",*s2);
          printf(" s2 adress after freeing=%d\n",s2);
         return 0;
       // int x,stack_n,y;
       // printf("enter number of stack used 1,2,3 then enter number to be pushed to stack, to pop enter 0\n");//توفيرا للكوود هعتبر انه دخل واحد وهيشتغل علي اس وان
        //scanf("%d%d",&stack_n,&x);
        /*printf("enter number to be pushed to stack, to pop enter 0\n");
        scanf("%d",&x);
        if(x!=0)
        {
            if(push(s1,x)==STACK_FULL)
            {
                printf("stack is full\n");
            }
            else
            {
                printf("%d pushed to stack\n",x);
            }
        }
        else
        {
            if(pop(s1,&y)==STACK_EMPTY)
            {
                printf("stack empty\n");
            }
            else
            {
                printf("%d is popped\n",y);
            }

        }*/
    }
    return 0;
}
