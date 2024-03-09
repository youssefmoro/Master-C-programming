#include <stdio.h>
#include <stdlib.h>
int IsPrime (int n)
{
    unsigned int i5,flag=1;
    for(i5=2; i5<n; i5++)
    {
        if(n%i5==0)
        {
            flag=0;
        }
    }
    return flag;
}
int print_prime (int n1,int n2)
{
    unsigned int i=0,count=0;
    for(i=n1; i<=n2; i++)
    {
        if(IsPrime(i))
        {
            count++;
            printf("%d ",i);
        }
    }
    return count;

}
int max(int s1,int s2)
{
    if (s1>s2)
    {
        return s1;
    }
    else
    {
        return s2;
    }
}
int min(int s3,int s4)
{
    if (s3>s4)
    {
        return s4;
    }
    else
    {
        return s3;
    }
}
int main()
{
    while(1)
    {
        unsigned int x=0,y=0,res=0,resomax=0,resomin=0;
        printf("please enter the two numbers you want prime numbers between them\n");
        scanf("%d%d",&x,&y);
        resomax=max(x,y);
        resomin=min(x,y);
        res=print_prime(resomin,resomax);
        printf("no of prime numbers inside this range=%d\n",res);

    }
    return 0;
}
