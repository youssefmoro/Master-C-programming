#ifndef STACK_H
#define STACK_H

#define STACK_SIZE 10
#define STACK_FULL 0
#define STACK_DONE 1
#define STACK_EMPTY -1
#define POP_DONE 1

typedef struct{
int size;
int sp;
int *Data_Array;
}stack_type;
typedef stack_type *STACK;
//stack_type create_stack(int size);
stack_type *create_stack(int size);
void stack_delete(stack_type *s);
int push(stack_type *s,int data);
int pop(stack_type *s,int *data);
#endif // STACK_H
