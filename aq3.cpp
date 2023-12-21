#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int size = 5;

    int newSize;
    cout << "Enter new size of array: ";
	cin >> newSize;    
    int newArray[newSize];

    for (int i = 0; i < size; i++) {
        newArray[i] = a[i];
    }
	for (int j = size; j < newSize; j++) {
        newArray[j] = a[size - 1] + j - size + 1;
    }
    cout << "Updated array: ";
    for (int i = 0; i < newSize; i++) {
        cout << newArray[i] << " ";
    }
    cout << endl;

    return 0;
}
