#include <stdio.h>
#include <stdlib.h>
int biggest_entry (int n)
{
    static int x=0;
    static char flag=0;
    static int counter=0;
    counter++;//كده كل مرة اكول الفانكشن دي هتزيد فهعرف كام مرة اتندهت من اي حتة
    if(flag==0)
    {
        x=n;
        flag=1;
    }
    if(n>x)
    {
        x=n;
        return x;
    }
    else
    {
        return x;
    }


}
int main()
{
    while(1)
    {
        int n;
        scanf("%d",&n);
        int y= biggest_entry(n);
        printf("%d\n",y);

    }
    return 0;
}
