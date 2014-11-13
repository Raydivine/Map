#ifndef LinkedList_H
#define LinkedList_H

typedef struct LinkedList LinkedList;

struct LinkedList{
  LinkedList *next;
  void *data;
};

void addLinkedList(LinkList **listPtr, *LinkedList *newList);
void removeLinkedList(LinkList **listPtr, *LinkedList *newList);
void destroyAllLinkList(LinkedList *firstList);
void findLinkedList (LinkEdList **listPtr, void *data, int(*compare)(void *dataCollection, void*data));

#endif // LinkedList_H
