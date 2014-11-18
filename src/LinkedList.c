#include <stdio.h>
#include <malloc.h>
#include "LinkedList.h"

LinkedList *createLinkedList(void *data){
  LinkedList *list = malloc(sizeof(LinkedList));
  list->next = NULL;
  list->data = data;
  return list;
}

void destroyAllLinkedLists(LinkedList *firstList){
  free(firstList);
}


void addLinkedList(LinkedList **listPtr, LinkedList *newList){


}

void removeLinkedList(LinkedList **listPtr, LinkedList *listToRemove){

}



void findLinkedList(LinkedList **listPtr, void *data, int(*compare)(void *dataInCollection, void *data)){


}