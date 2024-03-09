#ifndef HH_HH
#define HH_HH

#define QUEUE_SIZE 5
#define QUEUE_FULL 0
#define  QUEUE_DONE 1
#define  QUEUE_EMPTY -1
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


void swap_var(int *n1,int *n2);
int queue_in(int data);
int queue_out(int *data);



#endif // HH_HH
