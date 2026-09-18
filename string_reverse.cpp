#include <iostream>
#include <string>

using namespace std;

int main() {
    // Dynamically allocate memory for a string
    string *str = new string;

    // Get input string from user
    cout << "Enter a string: ";
    getline(cin, *str);

    // Reverse the string in-place
    int left = 0;
    int right = str -> length() - 1;
    while (left < right) {
        swap((*str)[left], (*str)[right]);
        left++;
        right--;
    }

    // Display reversed result
    cout << "Reversed string: " << *str << endl;

    // Free allocated memory
    delete str;
    str = nullptr;

    return 0;
}