#include <iostream>
using namespace std;

bool hasCarry(int A, int B) {
    while (A > 0 || B > 0) {
        int digitA = A % 10; // Extract the last digit of A
        int digitB = B % 10; // Extract the last digit of B
        int sum = digitA + digitB;

        if (sum >= 10) {
            return true; // Carry occurs
        }

        A /= 10; // Remove the last digit of A
        B /= 10; // Remove the last digit of B
    }
    return false; // No carry occurs
}

int main() {
    int A, B;
    cin >> A >> B;

    if (hasCarry(A, B)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
