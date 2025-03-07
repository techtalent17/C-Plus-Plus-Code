#include <iostream>
#include <string>
using namespace std;

string caesarCipher(int N, const string& message) {
    string result;
    for (char ch : message) {
        if (ch == ' ') {
            // Keep spaces unchanged
            result += ' ';
        } else {
            // Shift the character by N positions to the left
            char shiftedChar = ch - N;
            if (shiftedChar < 'a') {
                // Wrap around to the end of the alphabet
                shiftedChar += 26;
            }
            result += shiftedChar;
        }
    }
    return result;
}

int main() {
    int N;
    cin >> N;
    cin.ignore(); // Ignore the newline after N
    string message;
    getline(cin, message);

    string encryptedMessage = caesarCipher(N, message);
    cout << encryptedMessage << endl;

    return 0;
}
