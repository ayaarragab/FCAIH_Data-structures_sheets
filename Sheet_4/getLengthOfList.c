#include "queue.h"
/**
 * getLength - returns length of the queue
 * @list: linked list
 * Return: length
*/
int getLength(queueList *list)
{
    int i = 0;
    node *tmp = list->head;
    while (tmp)
    {
        tmp = tmp->next;
        ++i;
    }
    return i;
}