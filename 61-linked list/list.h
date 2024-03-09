#ifndef LIST_H
#define LIST_H
#define LIST_EMPTY -1
#define DATA_FOUND 1
#define DATA_NOT_FOUND 0
typedef struct node
{
    int data;
    //int circular_flag;
   struct node*next;

}node_t;

int List_removeFromFirst(node_t**head);
int List_removeFromLast(node_t **head);
int List_remove(node_t **head,int data);
int List_insertAfter(node_t *head,int PrevData, int NewData );
void List_addNodeToFirst(node_t**head,int data);
int editNode(node_t*head,int OldData,int NewData);
void List_print(node_t*head);
void List_addNodeToLast(node_t**head,int data);
node_t* create_node(int data);
#endif // LIST_H
