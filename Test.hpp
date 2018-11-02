/**
*	@file Test.h
*	@author Zachary Atkins
*	@date 11/2/2018
*	@brief A header file for Test class
*/

#if !defined(TEST_H)
#define TEST_H

#include <iostream>
#include <assert.h>
#include "LinkedListOfInts.h"
#include "Node.h"
#include <vector>

using namespace std;
class Test
{   
    public:
    Test(LinkedListOfInts testList);
    ~Test();
    void runTests();
    
    private:
    bool testIsEmpty(bool expected) const;
    bool testSize(bool expected) const;
    bool testSearch(int value, bool expected) const;
    bool testToVector(vector<int> expected) const;
    bool testAddBack(int value);
    bool testAddFront(int value);
    bool testRemoveBack(bool expected);	
    bool testRemoveFront(bool expected);
    LinkedListOfInts* list;

};
#endif // TEST_H
