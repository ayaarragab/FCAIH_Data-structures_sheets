#ifndef QUEUE_H
#define QUEUE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node
{
    int burst_time;
    int priority;
    struct node *next;
}node;
typedef struct queue
{
    node *head;
    node *tail;
}queueList;
void addNodeEnd(int burst_time, int priority, queueList *list);
void deleteNodeEnd(queueList *list);
int getLength(queueList *list);
queueList *createQueue(void);
void *freeList(queueList *list)
#endif