#include "Test.hpp"

Test::Test(LinkedListOfInts testList)
{
    list = &testList;
}

void Test::runTests()
{
    cout << "Starting Test Suite...\n";

    // List should be empty
    
}

bool Test::testIsEmpty(bool expected) const
{
    return list->isEmpty() == expected;
}
bool Test::testSize(bool expected) const
{
    return list->size() == expected;
}
bool Test::testSearch(int value, bool expected) const
{
    return list->search(value) == expected;
}
bool Test::testToVector(vector<int> expected) const
{
    vector<int> result = list->toVector();
    if (result == expected) {
        return true;
    }
    return false;
}
bool Test::testAddBack(int value)
{

}
bool Test::testAddFront(int value)
{

}
bool Test::testRemoveBack(bool expected);
{

}
bool Test::testRemoveFront(bool expected)
{

}