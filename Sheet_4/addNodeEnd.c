#include "queue.h"
/**
 * addNodeEnd - adds node to the end
 * @burst_time: burst_time
 * @priority: priority
 * @list: list
 * Return: nothing
*/
void addNodeEnd(int burst_time, int priority, queueList *list)
{
    node *newNode = malloc(sizeof(node));    
    if (!list->head || !list->tail || !newNode)
        return;
    newNode->burst_time = burst_time;
    newNode->priority = priority;
    if (!list->tail->next)
    {
        list->tail->next = newNode;
        list->tail = newNode;
        newNode->next = NULL;
    }
    return;
}