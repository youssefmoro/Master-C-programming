#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* while(1)
     {
         signed int n1=0,n2=0,op=0,result=0;
         printf("please enter the 2 numbers \n");
         scanf("%d%d",&n1,&n2);
         printf("please enter the operation \n");
         fflush(stdin);
         scanf("%c",&op);
         if(op=='+')
         {
             result= n1+n2;
             printf("result is %d\n",result);
         }
         else if(op=='-')
         {
             result= n1-n2;
             printf("result is %d\n",result);
         }
         else if(op=='*')
         {
             result= n1+n2;
             printf("result is %d\n",result);
         }
         else if(op=='/')
         {
             if(n2==0)
             {
                 printf("result is undefined\n");
             }
             else
             {
                 result= n1/n2;
                 printf("result is %d\n",result);
             }
         }
         else if(op=='%')
         {
             result= n1%n2;
             printf("result is %d\n",result);
         }
         else
         {
             printf("wrong operation sign please enter something else\n");
         }
     }*/
    while(1)
    {
        signed int n1=0,n2=0,op=0,result=0;
        printf("please enter the 2 numbers \n");
        scanf("%d%d",&n1,&n2);
        printf("please enter the operation \n");
        fflush(stdin);
        scanf("%c",&op);
        switch(op)
        {
        case'+':
            result= n1+n2;
            printf("result is %d\n",result);
            break;
        case'-':
            result= n1-n2;
            printf("result is %d\n",result);
            break;
        case'*':
            result= n1*n2;
            printf("result is %d\n",result);
            break;
        case'/':
            if(n2==0)
            {
                printf("result is undefined\n");
            }
            else
            {
                result= n1/n2;
                printf("result is %d\n",result);
            }
            break;
        case'%':
            result= n1%n2;
            printf("result is %d\n",result);
            break;
        default:

            printf("wrong operation sign please enter something else\n");
            break;
        }
    }
    return 0;
}
