#include <stdio.h>
#include <stdlib.h>

#define max(x,y) (x>y?x:y)
void main()
{
int x=0,y=0;
printf("enter x then y");
scanf("%d%d",&x,&y);
printf("bigger=%d",max(x,y));
}