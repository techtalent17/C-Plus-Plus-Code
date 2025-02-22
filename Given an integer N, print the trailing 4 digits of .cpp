//Given an integer N, print the trailing 4 digits of
//N!
//N! (N factorial).

#include <iostream>
using namespace std;

void lastFourDigitsFactorial(int N) {
    if (N >= 25) {
        // For N >= 25, factorial has at least four trailing zeros
        cout << "0000" << endl;
        return;
    }

    int factorial = 1;
    for (int i = 2; i <= N; i++) {
        factorial *= i;
        factorial %= 10000; // Keep only the last 4 digits
    }

    // Ensuring no leading zeros unless it's exactly 0000
    cout << factorial << endl;
}

int main() {
    int N;
    cin >> N;
    lastFourDigitsFactorial(N);
    return 0;
}
