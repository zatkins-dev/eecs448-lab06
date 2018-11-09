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
    /**
     * Runs all tests and outputs results to console
     * @pre None
     * @post None
     */
    void runTests();

    private:
    /**
     * @pre None
     * @post If bug is found, adds string to failedTests
     * @returns Output string of test results
     */
    string testIsEmpty();
    /**
     * @pre None
     * @post If bug is found, adds string to failedTests
     * @returns Output string of test results
     */
    string testSize();
    /**
     * @pre None
     * @post If bug is found, adds string to failedTests
     * @returns Output string of test results
     * @param value [in] value to search for
     */
    string testSearch(int value);
    /**
     * @pre None
     * @post If bug is found, adds string to failedTests
     * @returns Output string of test results
     * @param value [in] value to try to add to the back
     */
    string testAddBack(int value);
    /**
     * @pre None
     * @post If bug is found, adds string to failedTests
     * @returns Output string of test results
     * @param value [in] value to try to add to the front
     */
    string testAddFront(int value);
    /**
     * @pre None
     * @post If bug is found, adds string to failedTests
     * @returns Output string of test results
     */
    string testRemoveBack();
    /**
     * @pre None
     * @post If bug is found, adds string to failedTests
     * @returns Output string of test results
     */
    string testRemoveFront();
    /**
     * @pre None
     * @post None
     * @returns Output string of this->list
     * * format of output for k elem list is "[list[0],list[1],...,list[k]]" 
     */
    string displayList();
    /**
     * @pre None
     * @post None
     * @returns Output string of this->list
     * * format of output for k elem vector is "[vect[0],vect[1],...,vect[k]]" 
     */
    string displayVector(vector<int> vect);
    /**
     * * List for testing
     */
    LinkedListOfInts* list;
    /**
     * * vector of big description strings
     */
    vector<string> failedTests;

};
#endif // TEST_H
