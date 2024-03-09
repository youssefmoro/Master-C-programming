#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
int string_to_integer (char*string)
{
    string_reverse(string);
    signed int i=0,digit,n=0,power=0,flag=0;
    if(string[0]=='-')
    {
        i=1;
        flag=1;
    }
    else if(string[0]==0)
    {
        return 0;
    }
    while(string[i])
    {
        if(string[i]>='0'&&string[i]>='9')
        {
            digit=string[i]-'0';
            n=(n+(pow(10,power)*digit));
            power++;
        }
        i++;

    }
    if(flag==1)
    {
        n=n*-1;
    }

    return n;

}
int main()
{
    while(1)
    {
        signed int n1=0;
        fflush(stdin);
        scanf("%d",&n1);
        printf("%d\n",n1);
    }
    return 0;
}
