#include <stdio.h>
#include <stdlib.h>
#include "stackusinglinkedlist.h"

int main()
{
    int y=0;
     node_t *l1=0;
      push(&l1,5);
       push(&l1,10);
        push(&l1,15);
        pop(&l1,&y);
        List_print(l1);
         List_print_reverted(l1);
    return 0;
}
