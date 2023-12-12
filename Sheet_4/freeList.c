#include "queue.h"
/**
 * freeList - deallocates the queue
 * Return: nothing
*/
void *freeList(queueList *list)
{
    if (list)
    {
        if (list->tail && list->head)
        {
            free(list->tail);
            free(list->head);
        }
    }
    free(list);
}