//leap year

#include <iostream>
using namespace std;

bool isLeapYear(int Y) {
    return (Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0);
}

int main() {
    int Y;
    cin >> Y;

    cout << (isLeapYear(Y) ? "Yes" : "No") << '\n';

    return 0;
}
