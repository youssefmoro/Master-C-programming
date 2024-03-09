#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        unsigned char n1=0,symbol=0;
        printf(" please enter the number followed by the character\n");
        fflush(stdin);
        scanf("%d %c",&n1,&symbol);
        if(n1%2==0)
        {
            printf("%c",symbol);
        }
        else
        {
            if(symbol>='a')
            {
                symbol=symbol-'a'+'A';
            }
            else
            {
                symbol=symbol-'A'+'a';
            }
            printf("%c",symbol);
        }

    }
       return 0;
}
