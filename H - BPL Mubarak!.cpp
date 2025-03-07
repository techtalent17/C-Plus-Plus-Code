#include <iostream>
#include <string>
using namespace std;

void calculateOversAndBalls(const string& S) {
    int legalBalls = 0;

    // Count legal balls
    for (char ch : S) {
        if (ch >= '0' && ch <= '6' || ch == 'O') {
            legalBalls++;
        }
    }

    // Calculate overs and remaining balls
    int overs = legalBalls / 6;
    int balls = legalBalls % 6;

    // Output the result with correct pluralization
    if (overs > 0) {
        cout << overs << (overs == 1 ? " OVER" : " OVERS");
        if (balls > 0) {
            cout << " " << balls << (balls == 1 ? " BALL" : " BALLS");
        }
    } else {
        cout << balls << (balls == 1 ? " BALL" : " BALLS");
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Ignore the newline after T

    for (int t = 0; t < T; ++t) {
        string S;
        getline(cin, S);
        calculateOversAndBalls(S);
    }

    return 0;
}
