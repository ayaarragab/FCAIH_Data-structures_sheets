#include "queue.h"
/**
 * createList - creates queue
 * Return: list
*/
queueList *createQueue(void)
{
    queueList *listPtr = malloc(sizeof(queueList));
    listPtr->head = malloc(sizeof(node));
    listPtr->tail = malloc(sizeof(node));
    if (!listPtr || !listPtr->head || !listPtr->tail)
        return NULL;
    return listPtr;   
}