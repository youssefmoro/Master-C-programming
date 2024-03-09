#ifndef QUEUE_H
#define QUEUE_H

#define QUEUE_SIZE 5
#define QUEUE_FULL 0
#define  QUEUE_DONE 1
#define  QUEUE_EMPTY -1
#define POP_DONE 1

void swap_var(int *n1,int *n2);
int queue_in(int data);
int queue_out(int *data);
#endif // QUEUE_H
