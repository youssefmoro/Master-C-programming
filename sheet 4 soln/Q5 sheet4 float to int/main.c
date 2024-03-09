#include <stdio.h>
#include <stdlib.h>
/*void string_of_integer(char*string,float n)
{
    n=n*100;
    int num=n;
    unsigned int i=0,digit=0;
    if(num==0)
    {
        string[0]='0';
        string[1]=0;
    }
    else if(num<0)
    {
        num=num*-1;
        while(num)
        {
            digit=num%10;
            digit=digit+'0';
            string[i]=digit;//نفس فكرة الاوفسيت بالظبط
            num=num/10;
            i++;
        }
        string[i]='-';
        string[i+1]=0;
        string_reverse(string);
    }
    else
    {
        i=0;
        while(num)
        {
            digit=num%10;
            digit=digit+'0';
            string[i]=digit;//نفس فكرة الاوفسيت بالظبط
            num=num/10;
            i++;
        }
        string[i]=0;
        string_reverse(string);
    }
}*/
/*void string_reverse (char *string)
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
}*/
int string_len(char *str)
{
    int i5;
    for(i5=0; str[i5]!=0; i5++)
    {
    }
    return i5;
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
void string_print (char *string)
{
    int i;
    for (i=0; string[i]; i++)
    {
        printf("%c",*(string+i));
    }

}
char *float_to_string(float num)
{
    int digit,i=0,count=0;
    char arr[10];
    char *string=(char*)malloc(10);
    float n1=(num*100);
    char xum;
    while(n1)
    {
        count++;
        digit=((int)n1%10);
        arr[i]=digit;
        i++;
        n1=(int)(n1/10);
    }
    int size=i;
    for(i=0;i<2;i++)
    {
        xum=arr[i];
        string[i]=xum+'0';
    }
    string[2]='.';
    for(i=i;i<size;i++)
    {
        xum=arr[i];
        string[i+1]=xum+'0';
    }
    string[i+1]=0;
    string_reverse(string);
    string=realloc(string,(count+2));
    return string;
}
int main()
{
    float x=565.55;
    char *p=float_to_string(x);
    string_print(p);
    return 0;
}
