#ifndef H_H
#define H_H
#define LIST_EMPTY -1
#define DATA_FOUND 1
#define DATA_NOT_FOUND 0
#define STACK_SIZE 10
#define STACK_FULL 0
#define STACK_DONE 1
#define STACK_EMPTY -1
#define POP_DONE 1

typedef struct node
{
    int data;
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
int get_node_from_last(node_t**head);

int pop(node_t**head,int *data);
int push(node_t** head,int data);

#endif // H_H
