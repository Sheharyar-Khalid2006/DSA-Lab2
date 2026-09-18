#include <iostream>
#include <cassert>
using namespace std;

// Flawed implementation: Treats equal neighboring elements as unsorted
bool isSorted(const int* arr, const int size) {
    if (size <= 1) return true;
    
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] >= arr[i + 1]) { // Bug: Should be '>' to allow duplicates
            return false;
        }
    }
    return true;
}

void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
}

void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false);
}

void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true); // Fails here!
}

void testSingleElement() {
    int arr[] = {42};
    assert(isSorted(arr, 1) == true);
}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
}

void testNegativeValues() {
    int arr[] = {-5, -3, -1, 0, 2};
    assert(isSorted(arr, 5) == true);
}

void testAllEqual() {
    int arr[] = {7, 7, 7, 7};
    assert(isSorted(arr, 4) == true);
}

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