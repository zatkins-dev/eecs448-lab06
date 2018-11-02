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

bool Test::testIsEmpty() const
{
    vector<int> testAgainst = list->toVector();
    return list->isEmpty() == testAgainst.empty();
}
bool Test::testSize() const
{
    vector<int> testAgainst = list->toVector();
    return list->size() == int (testAgainst.size());
}
bool Test::testSearch(int value) const
{
    vector<int> testAgainst = list->toVector();
    bool found = false;
    for (auto val: testAgainst) {
        if (val == value) {
            found = true;
        }
    }
    return list->search(value) == found;
}
bool Test::testAddBack(int value)
{
    vector<int> testAgainst = list->toVector();
    list->addBack(value);
    testAgainst.push_back(value);
    if (list->toVector() == testAgainst) {
        return true;
    }
    return false;
}
bool Test::testAddFront(int value)
{
    vector<int> testAgainst = list->toVector();
    list->addFront(value);
    testAgainst.insert(testAgainst.begin(), value);
    if (list->toVector() == testAgainst) {
        return true;
    }
    return false;
}
bool Test::testRemoveBack()
{
    vector<int> testAgainst = list->toVector();    
    if (testAgainst.size() == 0) {
        return list->removeBack() == false;
    }
    testAgainst.pop_back();
    if (list->removeBack()) {
        return list->toVector() == testAgainst;
    }
    return false;
}
bool Test::testRemoveFront()
{
    vector<int> testAgainst = list->toVector();    
    if (testAgainst.size() == 0) {
        return list->removeFront() == false;
    }
    testAgainst.erase(testAgainst.begin());
    if (list->removeBack()) {
        return list->toVector() == testAgainst;
    }
    return false;
}