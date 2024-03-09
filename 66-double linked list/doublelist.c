#include "doublelist.h"
void Dlist_insertAfter(Dlist_t* headntail,int prevData,int newData)// باعتلها ستراكت شايل بوينتارز الهيد والتيل في الهيب وباعت معاها الداتا اللي هدور عليها عشان احط النود الجديدة بعدها والداتا بتاعة النود الجديدة
{

    Dnode_t* current= (headntail->head);
    if (headntail->tail->data==prevData)//الكورنر كيس الوحيدة اني يطلع اللي بدور عليه اخر ايليمنت قبل التيل وعشان كده هجيب التيل وارجع علي الايلمينت ده واجيب الداتا اللي جواه لو هي البريفداتا يبققي ده الكوندشن بتاعي
    {
        Dnode_t* NewNode=create_Dnode(newData);
        NewNode->prev=headntail->tail;
        headntail->tail=NewNode;
        NewNode->prev->next=NewNode;
    }
    while(current!=0)
    {
        if(current->data==prevData)
        {
            Dnode_t* NewNode=create_Dnode(newData);
            NewNode->next=current->next;//دلوقتي الكارنت نكست فيها عنوان الايليمنت 9 وهو ده اللي عايزه كنكست للنيونود دايما للتسهيل ابدأ بانك تظبط النيونود
            NewNode->next->prev=NewNode;//البريف بتاع ال9 خليته يشاور علي الايلمنت الجديد
            current->next=NewNode;//الكارنت 7 النكست بتاعها خليته بيشاور علي الايلمنت الجديد
            NewNode->prev=current;//اخر حاجة النود الجديدة البريف بتاعها ظبطته علي ال7 اللي هي الكارنت
            (headntail->size)++;//عشان زودنا ايلمنت
            return;
        }
        current=current->next;
    }
}
Dnode_t* create_Dnode(int data)
{
    Dnode_t* N;
    N=malloc(sizeof(Dnode_t));
    N->data=data;
    N->next=0;
    N->prev=0;
    return N;
}

LIST create_list(void)//or Dlist_t* هي هي فتح دماغك
{
    LIST l;
    l=malloc(sizeof(Dlist_t));
    l->head=0;
    l->tail=0;
    l->size=0;//او اعمله بالكالوك بدل التلت سطور بتوع التصفير دو
}
