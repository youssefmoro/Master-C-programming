#include <stdio.h>
#include <stdlib.h>
void string_print (char *arr)
{
    unsigned char i ;
    for (i=0;; i++)
    {
        printf("%c",*(arr+i));
        if(arr[i]=='\0')
        {
            break;
        }
    }

}
void string_scan(char *string)
{
    unsigned int i=0;
    printf("\nplease enter your string, when done enter\n");
    scanf(" %c",(string+i));
    for(; string[i]!='\n';)
    {
        i++;
        scanf("%c",(string+i));
    }
    string[i]='\0';

}

int main()
{
    while(1)
    {
    unsigned char string[100],x;
    string_scan(string);
    x=strlen(string);
   string_print(string);
   printf("length=%d",x);
    }

    return 0;
}
