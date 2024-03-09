#include <stdio.h>
#include <stdlib.h>
char stringlen(char *str)
{
    unsigned char i;
    for(i=0; str[i]; i++)
    {
    }
    return i;
}
void string_print_Ninside(int*array)
{
    int size=(stringlen(array)+1),first_comma_index,second_comma_index,third_comma_index;
    int i,j,k=0,flag=0,firstN[5],secondN[5],digits1=0,digits2=0;
    int n1=0,n2=0;
    for(i=0; i<size; i++)
    {
        if(array[i]==','&&flag==0)
        {
            first_comma_index=i;
            j=i+1;
            while(array[j]>='0'&&array[j]<='9')
            {
                firstN[k]=array[j];
                j++;
                k++;
                digits1++;
            }
            flag=1;
        }
        else if(array[i]==','&&flag==1)
        {
            k=0;
            second_comma_index=i;
            j=i+1;
            flag=2;
        }
        else if(array[i]==','&&flag==2)
        {
            k=0;
            third_comma_index=i;
            j=i+1;
            while(array[j]>='0'&&array[j]<='9')
            {
                secondN[k]=array[j];
                j++;
                k++;
                digits2++;
            }
        }
    }
    for(i=0; i<digits1; i++)
    {
        n1=n1+(firstN[i]*pow(10,digits1-1-i));
    }
    for(i=0; i<digits2; i++)
    {
        n2=n2+(secondN[i]*pow(10,digits2-1-i));
    }
    for(k=0; k<n1; k++)
    {
        for(i=0; i<first_comma_index+1; i++)
        {
            printf("%c",array[i]);
        }
        printf("/n");
    }
    for(k=0; k<n2; k++)
    {
        for(i=second_comma_index+1; i<third_comma_index+1; i++)
        {
            printf("%c",array[i]);
        }
        printf("/n");
    }
}
int main()
{
    char string[]="hi,5,hello,12";
    string_print_Ninside(string);
    return 0;
}
