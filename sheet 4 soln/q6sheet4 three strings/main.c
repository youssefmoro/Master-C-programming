#include <stdio.h>
#include <stdlib.h>
void string_print(char *str)
{
    unsigned char i;
    for(i=0; str[i]; i++)
    {
        printf("%c",str[i]);
    }

}
char string_len(char *str)
{
    unsigned char i;
    for(i=0; str[i]; i++)
    {
    }
    return i;
}
int *three_strings_manipulation(char *string1,char *string2,char *string3)
{
    int i,j=0,c=0,count=0,first_index,last_index;
    int str1=string_len(string1);
    int str2=string_len(string2);
    int str3=string_len(string3);
    int new_len=str1-str2;

    new_len=new_len+str3;
    char *string_word1=(char*)calloc(new_len+1,sizeof(char));
    for(i=0; i<str1; i++)
    {
        c=i,count=0;
        for(j=0; j<str2; j++)
        {
            if(string2[j]==string1[c])
            {
                count++;
                if(count==1)
                {
                    first_index=c;
                }
                if(count==str2)
                {
                    last_index=c
                }
                c++;
            }
            else
            {
                break;
            }
        }
        if(count==str2)
        {
            for(i=0; i<first_index; i++)
            {
                string_word1[i]=string1[i];
            }
            j=0;
            for(i=i; string3[j]; i++)
            {
                string_word1[i]=string3[j];
                j++;
            }
            if(string1[last_index+1]!=0)
            {
                string_word1[i]=' ';
            }
            i=i+1;
            j=last_index+2;
            for(i=i; string1[j]; i++)
            {
                string_word1[i]=string1[j];
                j++;
            }
            string_word1[i]=0;
            return string_word1;
        }
        else
        {
            return string_word1;
        }
    }
}
int main()
{
    char str1[]="ahmed mohamed ali kamel";
    char str2[]="ali";
    char str3[]="ayman";
    int *p=three_strings_manipulation(str1,str2,str3);
    string_print(p);
    return 0;
}
