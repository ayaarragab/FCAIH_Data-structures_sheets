#include "queue.h"
/**
 * 
*/
void deleteNodeEnd(queueList *list)
{
    if (!list || !list->tail || !list->head)
        return;
    if (!list->head->next && list->head)
    {
        free(list->head);
        list->head = NULL;
    }
    node* tmp = list->head, *ref;
    int length = getLength(list), i = 0;
    while (i < length - 2)
    {
        tmp = tmp->next;
        ++i;
    }
    if (tmp && list->tail)
    {
        ref = list->tail;
        ref = tmp;
        free(list->tail);
        tmp->next = NULL;
    }
}