#include "queuelinkedlist.h"
//int queue[QUEUE_SIZE];
int sp=0;
node_t *temp=0;
node_t *temp1=0;
void swap_linkedlist(node_t**head)
{
    temp1->data=(*head)->data;
    (*head)->data=(*head)->next->data;
    (*head)->next->data=temp1->data;
}
int queue_in(node_t**head,int data)
{
    if(sp==0)
    {
       List_addNodeToFirst(head,data);
        sp++;
        return QUEUE_DONE;
    }
    else if(sp==1)
    {
        (*head)->next=create_node(data);
        swap_linkedlist(head);
        sp++;
        return QUEUE_DONE;
    }
    else if(sp<QUEUE_SIZE&&sp>1)
    {
        int i;
        temp=(*head)->data;
        ((*head)->data)=data;
        for(i=sp; i>1; i--)
        {
            swap_linkedlist(head)
        }
        queue[1]=temp;
        sp++;
        return QUEUE_DONE;
    }
    else
    {
        return QUEUE_FULL;
    }
}

int queue_out(int *data)
{
    if(sp==0)
    {
        return QUEUE_EMPTY;
    }
    else
    {
        *data=queue[sp-1];
        sp--;
        return POP_DONE;
    }
}




node_t*create_node(int data)
{
    node_t*NewNode=malloc(sizeof(node_t));
    NewNode->data=data;
    NewNode->next=0;//لحد ما انت تدخل عنوان الايلمينت الجاي او تعمل ايلمينت اصلا انا هخليك بزيرو
    return NewNode;
}
int List_insertAfter(node_t *head,int PrevData, int NewData )
{
    if(head==0)
    {
        return 0;
    }
    node_t*current=head;
    node_t*NewNode=create_node(NewData);
    while(current!=0)
    {
        if(current->data==PrevData)
        {
            NewNode->next=current->next;
            current->next=NewNode;
            return 1;
        }
        current=current->next;
    }
    return 0;
}
int List_remove(node_t **head,int data)
{
    node_t*current=*head;
    if(*head==0)
    {
        return 0;
    }
    else if((*head)->data==data)
    {
        (*head)=(*head)->next;
        return 1;
    }
    while(current!=0)
    {
        if(current->next->data==data)
        {
            current->next=current->next->next;
            return 1;
        }
        current=current->next;
    }
    return -1;
}
int List_removeFromLast(node_t **head)
{
    node_t* current=*head;
    if(*head==0)
    {
        return 0;
    }
    while(current->next->next!=0)
    {
        current=current->next;
    }
    current->next=0;
    return 1;
}
int List_removeFromFirst(node_t**head)
{
    if(*head==0)
    {
        return 0;
    }
    else
    {
        (*head)=(*head)->next;
        return 1;
    }
}
void List_addNodeToLast(node_t**head,int data)
{
    node_t* NewNode=create_node(data);
    node_t* current=*head;
    if(*head==0)
    {
        *head= NewNode;
        return;
    }
    while(current->next!=0)
    {
        current=current->next;
    }
    current->next=NewNode;
}
int get_node_from_last(node_t**head)
{
    node_t* current=*head;
    if(*head==0)
    {
        return 0;
    }
    while(current->next!=0)
    {
        current=current->next;
    }
    current=current->next;
    return current->data;
}
void List_addNodeToFirst(node_t**head,int data)
{
    node_t* NewNode=create_node(data);
    NewNode->next=*head;
    *head=NewNode;

}

void List_print(node_t*head)
{
    node_t* current=head;
    while(current!=0)
    {
        printf("%d\n",current->data);
        current=current->next;
    }
    printf("\n------------------------------\n");
}
int editNode(node_t*head,int OldData,int NewData)
{
    node_t* current=head;
    if(current==0)
    {
        return LIST_EMPTY;
    }
    while(current!=0)
    {
        if(current->data==OldData)
        {
            current->data=NewData;
            return DATA_FOUND;
        }
        current=current->next;
    }
    return DATA_NOT_FOUND;
}
