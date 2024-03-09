#include <stdio.h>
#include <stdlib.h>
int string_len(char *str)
{
    int i5;
    for(i5=0; str[i5]!=0; i5++)
    {
    }
    return i5;
}
void string_of_integer(char*string,signed int n)
{
    unsigned int i=0,digit=0;
    if(n==0)
    {
        string[0]='0';
        string[1]=0;
    }
    else if(n<0)
    {
        n=n*-1;
        while(n)
        {
            digit=n%10;
            digit=digit+'0';
            string[i]=digit;//نفس فكرة الاوفسيت بالظبط
            n=n/10;
            i++;
        }
        string[i]='-';
        string[i+1]=0;
        string_reverse(string);
    }
    else
    {
        i=0;
        while(n)
        {
            digit=n%10;
            digit=digit+'0';
            string[i]=digit;//نفس فكرة الاوفسيت بالظبط
            n=n/10;
            i++;
        }
        string[i]=0;
        string_reverse(string);
    }
}
void string_print (char *string)
{
    int i;
    for (i=0; string[i]; i++)
    {
        printf("%c",*(string+i));
    }

}
void string_reverse (char *string)
{
    char len=string_len(string);
    int i=0,j=len-1;
    char temp;
    for(; i<=j; i++)
    {
        temp=string[i];
        string[i]=string[j];
        string[j]=temp;
        j--;

    }
}
int main()
{
    char str[100];
    signed int n =-50000;
    string_of_integer(str,n);
    string_print(str);
    return 0;
}
