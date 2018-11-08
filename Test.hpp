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
#include <string>
#include <sstream>

using namespace std;
class Test
{
    public:
    Test();
    ~Test();
    void runTests();

    private:
    string testIsEmpty();
    string testSize();
    string testSearch(int value);
    string testAddBack(int value);
    string testAddFront(int value);
    string testRemoveBack();
    string testRemoveFront();
    string displayList();
    string displayVector(vector<int> vect);
    LinkedListOfInts* list;
    vector<string> failedTests;

};
#endif // TEST_H
