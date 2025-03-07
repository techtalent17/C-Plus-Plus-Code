#include <iostream>
using namespace std;

int main() {
    int X, Y;
    // Read input values for X and Y
    cin >> X >> Y;

    // Calculate the remainder when Y is divided by X
    int remainder = Y % X;

    // If remainder is 0, no additional chocolates are needed
    if (remainder == 0) {
        cout << 0 << endl;
    } else {
        // Otherwise, calculate the additional chocolates needed
        int additionalChocolates = X - remainder;
        cout << additionalChocolates << endl;
    }

    return 0;
}
