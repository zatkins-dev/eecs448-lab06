#include "Test.hpp"

Test::Test()
{
    list = new LinkedListOfInts();
}

Test::~Test()
{
    delete list;
}

bool Test::testIsEmpty() const
{
    vector<int> testAgainst = list->toVector();

    return list->isEmpty() == testAgainst.empty();
}

tuple<bool, int> Test::testSize() const
{
    vector<int> testAgainst = list->toVector();
    return make_tuple(list->size() == int (testAgainst.size()), list->size());
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

void Test::runTests()
{
    vector<string> failedTests;
    string test;
    cout << "Starting Test Suite...\n----------------------\n";
    cout << "Testing LinkedListOfInts::isEmpty....\n\tExpected: True \n\tActual: ";
    if (testIsEmpty()) {
        test = "True\n\tResult: Passed!";
    } else {
        test = "False\n\tResult: Failed.";
        failedTests.push_back("LinkedListOfInts::isEmpty when list is empty.");
    }
    cout << test << endl;
    cout << "Testing LinkedListOfInts::addFront twice....\n\tResult: ";
    if (testIsEmpty()) {
        test = "True\n\tResult: Passed!";
    } else {
        test = "False\n\tResult: Failed.";
        failedTests.push_back("LinkedListOfInts::isEmpty when list is empty.");
    }
    test = testAddFront(1)&&testAddFront(2) ? "Passed!" : "Failed.";
    if (testIsEmpty()) {
        test = "True\n\tResult: Passed!";
    } else {
        test = "False\n\tResult: Failed.";
        failedTests.push_back("LinkedListOfInts::isEmpty when list is empty.");
    }
    cout << test << endl;
    cout << "Testing LinkedListOfInts::isSize......\n\tExpected: 2 \n\tActual: ";
    if (testIsEmpty()) {
        test = "True\n\tResult: Passed!";
    } else {
        test = "False\n\tResult: Failed.";
        failedTests.push_back("LinkedListOfInts::isEmpty when list is empty.");
    }
    tuple<bool, int> result = testSize();
    test = to_string(get<1>(result)) + (get<0>(result) ? "\n\tResult: Passed!" : "\n\tResult: Failed.");
    if (testIsEmpty()) {
        test = "True\n\tResult: Passed!";
    } else {
        test = "False\n\tResult: Failed.";
        failedTests.push_back("LinkedListOfInts::isEmpty when list is empty.");
    }
    cout << test << endl;
    cout << "Testing LinkedListOfInts::isEmpty.....\n\tExpected: False \n\tActual: ";
    if (testIsEmpty()) {
        test = "True\n\tResult: Passed!";
    } else {
        test = "False\n\tResult: Failed.";
        failedTests.push_back("LinkedListOfInts::isEmpty when list is empty.");
    }
    test = testIsEmpty() ? "False\n\tResult: Passed!" : "True\n\tResult: Failed.";
    if (testIsEmpty()) {
        test = "True\n\tResult: Passed!";
    } else {
        test = "False\n\tResult: Failed.";
        failedTests.push_back("LinkedListOfInts::isEmpty when list is empty.");
    }
    cout << test << endl;
    cout << "Testing LinkedListOfInts::addBack.....\n\tResult: ";
    if (testIsEmpty()) {
        test = "True\n\tResult: Passed!";
    } else {
        test = "False\n\tResult: Failed.";
        failedTests.push_back("LinkedListOfInts::isEmpty when list is empty.");
    }
    test = testAddBack(1) && testAddBack(2) ? "Passed!" : "Failed.";
    cout << test << endl;

}
