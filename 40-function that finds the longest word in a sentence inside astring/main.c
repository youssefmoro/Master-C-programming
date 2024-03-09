#include <stdio.h>
#include <stdlib.h>
char string_scan(char *string,char size)
{
    unsigned char i,saver;
    printf("\nplease enter your string, when done enter\n");
    for(i=0;i<size;i++)
    {
        scanf("%c",(string+i));
        if(string[i]==0x0A)
        {
            saver=i;
            string[i]='\0';
            return saver;
            break;
        }
    }

}
void string_print (char *arr)
{
    unsigned char i2 ;
    for (i2=0;; i2++)
    {
        printf("%c",*(arr+i2));
        if(arr[i2]==0)
        {
            break;
        }
    }

}
void longest_word (unsigned char *string, unsigned char *word)
{
    unsigned char i=0,c=0,max=0,index=0,j=0;
    for(i=0; string[i]; i++)
    {

        if(string[i]=' ')
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
    for(;j<max;)
    {
        word[j]=string[i];
        j++;
        i++;
    }
    word[j]=0;

}
int main()
{
    unsigned char x=0,i=0;
    unsigned char word[20];
    unsigned char str[100]= {0};
    unsigned char string1[]="I work as an embedded systems engineer for 5 years";
     //string_print(string1);
   // string_scan(str,100);
    longest_word(str,word);
    string_print(word);

    //string_print(word);
    //printf("longest word length=%hhu\n",x);
    return 0;
}
