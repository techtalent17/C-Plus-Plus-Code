#include <iostream>
#include <cmath>
using namespace std;

void findPosition(long long S) {
    long long k = ceil(sqrt(S));
    long long layer_max = k * k;
    long long mid = layer_max - k + 1;

    long long x, y;

    if (S == mid) {
        x = k;
        y = k;
    } else if (S < mid) {
        x = k;
        y = S - (k - 1) * (k - 1);
    } else {
        x = layer_max - S + 1;
        y = k;
    }

    if (k % 2 == 0) {
        swap(x, y);
    }

    cout << x << " " << y << endl;
}

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        long long S;
        cin >> S;
        cout << "Case " << t << ": ";
        findPosition(S);
    }
    return 0;
}
