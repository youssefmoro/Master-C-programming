#include <stdio.h>
#include <stdlib.h>
char string_scan(char *string,char size)
{
    unsigned char i,saver;
    printf("\nplease enter your string, when done enter\n");
    for(i=0; i<size; i++)
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
int string_mirror (char *string,int size)
{
    unsigned int i,j=size-1;
    if((size%2)!=0)
    {
        for(i=0; i<(size/2); i++)
        {
            if(string[i]==string[j])
            {
                j--;
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{
    while(1)
    {
        //char string1[]="salelas";
        char string1[50];
        string_scan(string1,50);
        //int size=sizeof(string1)/sizeof(string1[0]);
        int size=strlen(string1);
        int x= string_mirror(string1,size);
        if(x)
        {
            printf("mirror");
        }
        else
        {
            printf("not mirror");
        }
    }
    return 0;
}
