#include <stdio.h>
#include <stdlib.h>

void string_print (char *string)
{
    int i;
    for (i=0; string[i]; i++)
    {
        printf("%c",*(string+i));
    }

}
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
void string_subreverse (char *string,int first,int last)
{
    char len=string_len(string);
    int i=first,j=last-1;
    char temp;
    for(; i<=j; i++)
    {
        temp=string[i];
        string[i]=string[j];
        string[j]=temp;
        j--;

    }
}

void sentence_reverse(char *string1)
{
    int length=string_len(string1);
    string1[length]=' ';
    string1[length+1]=0;
    length=length+1;
      unsigned int i,space_counter=0;
    char first,last;
    string_subreverse(string1,0,length);
   for(i=0;string1[i]!=' ';i++)
   {

   }
   string_subreverse(string1,0,i);
   i=0;
    for(i=0; string1[i]; i++)
    {
        if(string1[i]==' ')
        {
            space_counter++;
            if(space_counter==1)
            {
                first=i;
            }
            else if(space_counter==2)
            {
                last=i;
                string_subreverse(string1,first,last);
                space_counter=1;
                first=i;
            }

        }
    }
    string_subreverse(string1,first,i);
}
int main()
{
    unsigned char string1[]="ahmed";
    char str2[100]= "I've been working as an embedded software engineer for 5 years and i love it";
    // string_reverse(string1);
    //printf("%c",string1[1]);
    //string_print(string1);
    //string_subreverse(str2,0,20);
    sentence_reverse(str2);
    string_print(str2);
    return 0;
}
