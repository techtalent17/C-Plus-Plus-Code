//print the maximum number
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;  // Read N

    if (N <= 0 || N >= 100) {
        return 0;  // Constraint check (0 < N < 100)
    }

    int max_value = 1;  // Since numbers are between 1 and 1000, initialize with the smallest possible value

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;  // Read each number

        // Ensure the number is within the given range (1 to 1000)
        if (num >= 1 && num <= 1000) {
            max_value = max(max_value, num);
        }
    }

    cout << max_value << endl;  // Print the maximum number

    return 0;
}


