#include "unity.h"
#include "Map.h"
#include "LinkedList.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_createMap_should_return_a_map(void){
  Map *map = createMap(10);
  
  TEST_ASSERT_NOT_NULL(map);
  TEST_ASSERT_EQUAL(10,map->size);
  TEST_ASSERT_NOT_NULL(map);
	
}
