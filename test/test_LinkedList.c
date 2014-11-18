#include "unity.h"
#include "LinkedList.h"
#include "Map.h"
#include "Student.h"
#include "mock_HashFunction.h"


void setUp(void){}

void tearDown(void){}

void test_createLinkedList_add_John_to_the_list(void){
  Student John = {.name = "John", .age = 15};
  LinkedList *newList;
  
  newList = (LinkedList*)createLinkedList(&John);
  TEST_ASSERT_NOT_NULL(newList);
  TEST_ASSERT_EQUAL_PTR(newList->data, &John);
}

void test_addLinkedList_add_John_to_the_list(void){

}