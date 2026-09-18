#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    
    // Dynamically allocates array using pointer whose size can be changed in future
    int *salArray = new int[size];

    // Salary input loop
    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i + 1) << ": ";
        cin >> salArray[i];
    }

    // Formula for incrementing
    for (int i = 0; i < size; i++) {
        salArray[i] = salArray[i] + salArray[i] / (i + 1);
    }

    // Displaying updated salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << salArray[i] << " ";
    }

    cout << endl;

    // Freeing dynamically allocated memory
    delete[] salArray;

    return 0;
}