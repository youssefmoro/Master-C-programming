#include <stdio.h>
#include <stdlib.h>
#include "list.h"
int main()
{
    node_t *l1=0;
    node_t *l2=0;
    l1=create_node(5);
    l1->next=create_node(7);
    l1->next->next=create_node(9);

    l1->next->next=create_node(50);
    List_addNodeToLast(&l1,70);
    printf("5=%d 7=%d 9=%d 70=%d\n",l1->data,l1->next->data,l1->next->next->data,l1->next->next->next->data);
    //l1->next->next->next=create_node(10);
    List_print(l1);
    editNode(l1,7,88);
    List_print(l1);
    List_addNodeToFirst(&l1,555);// هلاحظ ان دي تمثل عنوان البوينتار اللي شايل اول عنوان في ال اوليستة فلو عايز تعدل العنوان ده هتعمل اتنين ديريفرنس في الايديت اوعي تتلغبط
    List_print(l1);
    List_addNodeToLast(&l2,333);
    List_print(l2);
    List_insertAfter(l1,70,123);
    List_print(l1);
    int x=List_remove(&l1,70);
   List_removeFromLast(&l1);
    List_removeFromFirst(&l1);
    List_print(l1);



    return 0;
}
