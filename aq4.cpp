#include <iostream>
using namespace std;

int main() {
    int N, i, j, isPrime;
    cout << "Enter a positive integer: ";
    cin >> N;

    if (N <= 1) {
        cout << "Invalid input. Please enter a positive integer greater than 1." << endl;
        return 1;
    }
    i = N - 1;
    while (i > 1) {
        isPrime = true;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false; 
                break;
            }
        }

        if (isPrime) {
            cout << "The largest prime number less than " << N << " is " << i << endl;
            break;
        }
        i--;
    }
    return 0;  
}
