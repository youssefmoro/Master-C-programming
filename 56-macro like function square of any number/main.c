#define square(l) l*l
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x=5; 
	int y=square(x);
	printf("%d   %d",y,square(x+2));
	return 0;
}