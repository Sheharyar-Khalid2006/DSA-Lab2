#include <iostream>
using namespace std;

// Part 1: Function to print memory address and dereferenced value
void analyze_pointer(int *ptr) {
    if (ptr == nullptr) {
        cout << "Pointer is null" << endl;
        return;
    }
    cout << "Memory Location: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}

int main() {
    // Part 2a: Stack allocation
    int iValue = 42;
    cout << "\nStack Variable Analysis:" << endl;
    analyze_pointer(&iValue);

    cout << endl;

    // Part 2b: Heap allocation using new
    int *heapPtr = new int;
    *heapPtr = 99;
    cout << "Heap Variable Analysis:" << endl;
    analyze_pointer(heapPtr);

    // Free heap memory
    delete heapPtr;
    heapPtr = nullptr;

    return 0;
}