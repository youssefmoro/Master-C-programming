#include <stdio.h>
#include <stdlib.h>
#include "doublelist.h"

int main()
{
    LIST l1,l2,l3;//اعمل زي ما انت عايز كل دي بوينتارز الليسته او الستراكت مش هيتحجز فالهيب الا لما تنادي الكرييت ليست
    l1=create_list();
    Dnode_t* x=create_Dnode(5);
    l1->head=x;
    Dlist_insertAfter(l1,5,10);

    printf("Hello world!\n");
    return 0;
}
