#include "stack.h"
//static int stack[STACK_SIZE];
//static int sp=0;
int push(stack_type *s,int data)
{
    if((s->sp)<(s->size))
    {
        s->Data_Array[s->sp]=data;
        s->sp++;
        return STACK_DONE;//1 there's a place in the stack
    }
    else
    {
        return STACK_FULL;//0 stack is full
    }

}
int pop(stack_type *s,int *data)//you need to get pop order only and return the data and if stack is empty so nothing to be popped sothat i made a pointer to return the data on it
{
    if((s->sp)>0)
    {
        ((s->sp)--);
        *data=(s->sp);
        return POP_DONE;// sp is now on the first empty digit after poping return 1
    }
    else
    {
        return STACK_EMPTY;// stack hasn't any elements to be popped return -1
    }

}
void stack_delete(stack_type *s)
{
    free(s->Data_Array);
    s->Data_Array=0;//ليه عشان انا بحرر مخزن شايل عنوان مش حافظه فحاجة خلاص ولكن يبقي العنوان متخزن جوه المخزن ممكن حد ييجي يوصل للعنوان اللي بقي مع شغل البروسيسور بيستخدك المكان ده في
    //الميموري وبالتالي ممكن تخش عالعنوان ده واحد ضربت فدماغه هيخش علي داتا مش مفروض يخش وممكن يعدل يبوظ عادة الاو اس بيبقي مجهز ضد ده لكن ده بقي كده دانجلنج بوينتار
    s->sp=0;
    s->size=0;
    free(s);
}
stack_type *create_stack(int size)
{
    stack_type *s1;
    s1=malloc(sizeof(stack_type));//هيرجع عنوان اول مكان في الهيب للبلوك اللي من نوع ستراكت فعادي استقبله علي بوينتار
    (s1->Data_Array)=malloc(size*sizeof(int));//كده المساحة دي اتحجزت في الهيبوعنوانها متشال في الاس 1دوت داتا
    (s1->size)=size;
    (s1->sp)=0;
    return s1;
}
