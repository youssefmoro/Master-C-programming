#include <stdio.h>
#include <stdlib.h>

int main()
{
     unsigned int n1=0,n2=0,n3=0,n4=0,max=0;
    printf("Please enter n1,n2,n3,n4\n");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    max=n1;
    if (n2>max)
    {
        max=n2;
    }
    if (n3>max)
    {
        max=n3;
    }
    if (n4>max)
    {
        max=n4;
    }

        printf("max is %d",max);
return 0;

   /*  unsigned int n1=0,n2=0,n3=0,max;

    printf("Please enter n1\n");
    scanf("%d",&n1);
    printf("Please enter n2\n");
    scanf("%d",&n2);
    printf("Please enter n3\n");
    scanf("%d",&n3);
    if (n1>=n2)
    {
        if (n1>=n3)
        {
            printf("%d is the biggest",n1);
        }

        else
        {

            printf("%d is the biggest",n3);
        }
    }
    else
    {
        if (n2>=n3)
        {
             printf("%d is the biggest",n2);
        }
        else
        {
           printf("%d is the biggest",n3);
        }
    }
    */
    /* unsigned int n1=0,n2=0,n3=0,result;

    printf("Please enter n1\n");
    scanf("%d",&n1);
    printf("Please enter n2\n");
    scanf("%d",&n2);
    printf("Please enter n3\n");
    scanf("%d",&n3);
    if ((n1>=n2)&&(n1>=n3))
    {
        printf("%d is the biggest",n1);
    }
    else if ((n1>=n2)&&(n3>n1))
    {
        printf("%d is the biggest",n3);
    }
    else if ((n2>n1)&&(n2>=n3))
    {
        printf("%d is the biggest",n2);
    }
     else if ((n2>n1)&&(n2<n3))
    {
        printf("%d is the biggest",n3);
    }
    else*/
}
