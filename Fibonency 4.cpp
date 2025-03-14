#include <iostream>
using namespace std;

void printFibonacciInRange(int L, int R) {
    int a = 0, b = 1;
    bool printedOne = false; // Track if '1' has already been printed

    while (a <= R) {
        if (a >= L) {
            if (a == 1) { // Handle duplicate '1' case
                if (!printedOne) {
                    cout << a << "\n";
                    printedOne = true;
                }
            } else {
                cout << a << "\n";
            }
        }
        int c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int L, R;
    cin >> L >> R;
    printFibonacciInRange(L, R);
    return 0;
}
