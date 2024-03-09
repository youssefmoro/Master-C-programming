#include "list.h"

node_t*create_node(int data)
{
    node_t*NewNode=malloc(sizeof(node_t));
    NewNode->data=data;
   // NewNode->circular_flag=0;
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
    node_t*temp_eraser=0;
    if(*head==0)
    {
        return 0;
    }
    else if((*head)->data==data)
    {
        (*head)=(*head)->next;
        free(head);
        return 1;
    }
    while(current!=0)
    {
        /*if(*head->circular_flag==1)
        {
            return 0;
        }*/
        if(current->next->data==data)
        {
            temp_eraser=current->next;
            current->next=current->next->next;
            free(temp_eraser);
            return 1;
        }
        current=current->next;
    }
    return -1;
}
int List_removeFromLast(node_t **head)
{
    node_t* current=*head;
    node_t*temp_eraser=0;
    if(*head==0)
    {
        return 0;
    }
    while(current->next->next!=0)
    {
        current=current->next;
    }
    temp_eraser=current->next->next;
    current->next=0;
    free(temp_eraser);
    return 1;
}
int List_removeFromFirst(node_t**head)
{
    node_t*temp_eraser=0;
    if(*head==0)
    {
        return 0;
    }
    else
    {
        temp_eraser=(*head);//الهدف من دي فقط ازالة النود الزيادة من الهيب من غير الخطوة دي مش هعرف اعمل فريي
        (*head)=(*head)->next;
        free(temp_eraser);
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
void List_addNodeToFirst(node_t**head,int data)
{
    node_t* NewNode=create_node(data);
    NewNode->next=*head;
    *head=NewNode;

}

void List_print(node_t*head)
{
    node_t* current=head;
     node_t* current2=head;
    while(current!=0)
    {
        printf("%d\n",current->data);
        current=current->next;
        current2=current2->next->next;
          if(current==current2)
        {
            return 0;
        }

    }
    printf("\n------------------------------\n");
}
int editNode(node_t*head,int OldData,int NewData)
{
    node_t* current=head;
      node_t* current2=head;
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
        current2=current2->next->next;
         if(current==current2)
        {
            return 0;
        }
    }
    return DATA_NOT_FOUND;
}
