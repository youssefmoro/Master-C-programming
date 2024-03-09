#include <stdio.h>
#include <stdlib.h>
void string_scan(char *string);
void string_print (char *string);
void longest_word ( char *string, char *word);
int main()
{

        char str[100]= {0};
        char str2[100]= "I've been working as an embedded software engineer for 5 years";
        char word[30]="sayed";
       // string_scan(str);
       // string_print(str2);
        string_longest_word(str2,word);
        string_print(word);


    return 0;
}
void string_longest_word (char *string1,char *word1)
{
    unsigned char i,c=0,max=0,index=0,j=0;
    for(i=0;string1[i]; i++)
    {

        if(string1[i]==' ')
        {

            if(c>max)
            {
                max=c;
                index=i-1;
            }
            c=0;
        }
        else
        {
            c++;
        }
    }

    if(c>max)
    {
        max=c;
        index=i-1;

    }
    i=index-max+1;
    for(; j<max;)
    {
        word1[j]=string1[i];
        j++;
        i++;
    }
    word1[j]=0;

}
void string_print (char *string)
{
    int i;
    for (i=0; string[i]; i++)
    {
        printf("%c",*(string+i));
    }

}
void string_scan(char *string,int max_size)
{
    int i=0;
    scanf(" %c",&string[i]);
    for(; string[i]!='\n'&&i<max_size;)
    {
        i++;
        scanf("%c",&string[i]);
    }
    string[i]=0;

}
