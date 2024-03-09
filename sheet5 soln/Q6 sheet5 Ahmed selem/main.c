#include <stdio.h>
#include <stdlib.h>
char string_countsort(char*string)
{
    char max=string[0],count_size=0,min=string[0];
    int size=0,i,n_char=0,n_char_max=0;
    for(i=0; string[i]; i++)
    {
        size++;
        if (string[i]>max)
        {
            max=string[i];
        }
        if (string[i]<min)
        {
            min=string[i];
        }
    }
    printf("max=%c,min=%c\n",max,min);

    count_size=max-min+1;
    int *freq=(int*)calloc(count_size,sizeof(int));
    for(i=0; i<size; i++)
    {
        freq[string[i]-min]++;
    }
    i=0;
    for(i=0; i<count_size; i++)
    {
        n_char=0;
        while(freq[i])
        {
            n_char++;
            if (n_char==2)
            {
                return i+min;
            }
            freq[i]--;
        }
    }

}
int main()
{
    char string[]="ahmedselem";
    printf("%c",string_countsort(string));
    return 0;
}
