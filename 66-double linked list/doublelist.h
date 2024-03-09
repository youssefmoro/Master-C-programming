#ifndef DL_DL
#define DL_DL

typedef struct node
{
    int data;
    struct node*next;

} node_t;
typedef struct doubleNode
{
    int data;
    struct doubleNode* next;
    struct doubleNode* prev;
} Dnode_t;

typedef struct headTail
{
    Dnode_t* head;
    Dnode_t* tail;
    int size;
} Dlist_t;
//بدل ما كل مرة نعمل استريك ال وان واحنا بنعرف ستراكت من اللي فوق هعملها هنا بتايبديف واريح دماغي

typedef Dlist_t* LIST;
LIST create_list(void);
Dnode_t* create_Dnode(int data);
void Dlist_insertAfter(Dlist_t* headntail,int prevData,int newData);
#endif
