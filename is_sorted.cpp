#include <iostream>
#include <cassert>
using namespace std;

// Correct implementation: Allows duplicate elements (non-decreasing order)
bool isSorted(const int* arr, const int size) {
    if (size <= 1) return true;
    
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) { // Corrected: Returns false only if prior element is strictly greater
            return false;
        }
    }
    return true;
}

void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
    cout << "[PASS] testSortedArray: {1, 2, 3, 4, 5}" << endl;
}

void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false);
    cout << "[PASS] testUnsortedArray: {1, 4, 3, 5, 6}" << endl;
}

void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
    cout << "[PASS] testDuplicateValues: {1, 2, 2, 3, 5} (FIXED: handled as non-decreasing)" << endl;
}

void testSingleElement() {
    int arr[] = {42};
    assert(isSorted(arr, 1) == true);
    cout << "[PASS] testSingleElement: {42}" << endl;
}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
    cout << "[PASS] testDescendingArray: {5, 4, 3, 2, 1}" << endl;
}

void testNegativeValues() {
    int arr[] = {-5, -3, -1, 0, 2};
    assert(isSorted(arr, 5) == true);
    cout << "[PASS] testNegativeValues: {-5, -3, -1, 0, 2}" << endl;
}

void testAllEqual() {
    int arr[] = {7, 7, 7, 7};
    assert(isSorted(arr, 4) == true);
    cout << "[PASS] testAllEqual: {7, 7, 7, 7}" << endl;
}

void testEmptyArray() {
    assert(isSorted(nullptr, 0) == true);
    cout << "[PASS] testEmptyArray: nullptr" << endl;
}

int main() {
    cout << "=== Running TDD Test Suite (Version 3 - Fixed Implementation) ===" << endl;
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testAllEqual();
    testEmptyArray();

    cout << "\nAll 8 test cases passed successfully" << endl;
    cout << "TDD Fix Confirmed: Duplicate array logic fixed" << endl;
    return 0;
}