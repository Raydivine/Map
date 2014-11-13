#include <malloc.h>
#include "Map.h"
#include "LinkedList.h"

Map *createMap(int size){
  Map *map = malloc(sizeof(Map));
  map->size = size;
  map->table = malloc(sizeof(LinkedList *)*size);
  return map;
}

Map destroyMap(Map *map){
  int i;
  if(map != NULL){
    for(i=0; i<map->size; i++){
      destroyAllLinkedLists(map->table[i]);
    }
  }
  free(map->table);
  free(map);
}