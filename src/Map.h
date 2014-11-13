#ifndef Map_H
#define Map_H
#include "LinkedList.h"

typedef struct Map Map;

struct Map{
  int size;
  LinkedList **table;
};


#endif // Map_H
