#include <iostream>
#include <cassert>
using namespace std;

// Stub implementation (returns true unconditionally)
bool isSorted(const int* arr, const int size) {
    return true;
}

void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
}

void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false); // Fails in Version 1
}

void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
}

void testSingleElement() {
    int arr[] = {42};
    assert(isSorted(arr, 1) == true);
}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false); // Fails in Version 1
}

void testNegativeValues() {
    int arr[] = {-5, -3, -1, 0, 2};
    assert(isSorted(arr, 5) == true);
}

// Custom Test 1: All identical elements
void testAllEqual() {
    int arr[] = {7, 7, 7, 7};
    assert(isSorted(arr, 4) == true);
}

// Custom Test 2: Size 0 (Empty Array)
void testEmptyArray() {
    assert(isSorted(nullptr, 0) == true);
}

int main() {
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testAllEqual();
    testEmptyArray();

    cout << "All tests passed!" << endl;
    return 0;
}