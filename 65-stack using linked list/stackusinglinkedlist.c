#include "stackusinglinkedlist.h"
//int stack[STACK_SIZE];
int sp=0;
int push(node_t** head,int data)
{
    if(sp<STACK_SIZE)
    {
        if(sp==0)
        {
            List_addNodeToFirst(head,data);
        }
        else
        {
            List_addNodeToLast(head,data);
        }
        //stack[sp]=data;
        sp++;
        return STACK_DONE;//1 there's a place in the stack
    }
    else
    {
        return STACK_FULL;//0 stack is full
    }

}
int pop(node_t**head,int *data)//you need to get pop order only and return the data and if stack is empty so nothing to be popped sothat i made a pointer to return the data on it
{
    if(sp>0)
    {
        sp--;
        //*data=get_node_from_last(head);
        List_removeFromLast(head);
        return POP_DONE;// sp is now on the first empty digit after poping return 1
    }
    else
    {
        return STACK_EMPTY;// stack hasn't any elements to be popped return -1
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
void List_print_reverted(node_t*head)
{
    int i=0,j=0,k=0;
    node_t* current1=head;
    node_t* current2=head;
    node_t* current3=head;
    while((current->data)!=0)
    {
        i++;
        current1=current1->next;
    }
     printf("%d\n",current->data);
   /* for(k=1; k<i-1; k++)
    {
        current2=current3;
        for(j=k; j<i; j++)
        {
            current2=current2->next;
        }
        printf("%d\n",current->data);
    }*/
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
