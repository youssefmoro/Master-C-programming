#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(;;)
    {
        unsigned int i=0,number=0,sum=0,digit=0,savior=0;
        printf("enter your number\n");
        scanf("%d",&number);
        savior=number;
        for(i=0;number>0;i++)//دي عبارة عن لووب  شغالة طول الوقت لحد ما الريمندر الل انا مسمية نامبر يبقي بزيرو نفس فكرة المسألة
        {
            digit=number%10;
            sum=sum+digit;
            number=(number-digit)/10;
        }
        printf("sum of %d with %d digits is %d\n",savior,i,sum);


    }
    return 0;
}
