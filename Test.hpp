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
#include "eecs448-lab06-base/LinkedListOfInts.h"
#include "eecs448-lab06-base/Node.h"

class Test
{
    public:
        template <typename Y, typename X>
        bool test(Y (*func)(X), X inputs);

};
#endif // TEST_H
