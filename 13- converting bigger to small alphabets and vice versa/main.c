#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        /* char input;
         printf("please enter your character\n");
         fflush(stdin);
         scanf("%c",&input);
         if(input>=65&&input<=90)
         {
             printf("capital letter\n");
         }
         else if(input>=97&&input<=122)
         {
             printf("small letter\n");
         }
         else
         {
             printf("special character\n");
         }*/
        /*char input,difference;
        difference='a'-'A';
        printf("please enter your character\n");
        fflush(stdin);
        scanf("%c",&input);
        if(input>='A'&&input<='Z')
        {
            input=input+difference;
            printf("input is a capital letter\n");
            printf("after conversion '%c'\n",input);
        }
        else if(input>='a'&&input<='z')
        {
            input=input-difference;
            printf("input is a small letter\n");
            printf("after conversion '%c'\n",input);
        }
        else
        {
            printf("%c is a special character\n",input);
        }*/
              char input;
        printf("please enter your character\n");
        fflush(stdin);
        scanf("%c",&input);
        if(input>='A'&&input<='Z')
        {
            input=input-'A'+'a';
            printf("input is a capital letter\n");
            printf("after conversion '%c'\n",input);
        }
        else if(input>='a'&&input<='z')
        {
            input=input-'a'+'A';
            printf("input is a small letter\n");
            printf("after conversion '%c'\n",input);
        }
        else
        {
            printf("%c is a special character\n",input);
        }
    }
    return 0;
}
