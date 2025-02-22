//Given N numbers determine if they are in ascending order.

#include <iostream>
using namespace std;

int main() {
    int N;

    // Input the number of elements
    cin >> N;

    int arr[N];

    // Input the elements
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Check if the numbers are in ascending order
    bool isAscending = true;
    for (int i = 0; i < N - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isAscending = false;  // Found a pair that is not in ascending order
            break;
        }
    }

    // Output the result
    if (isAscending) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
