//Given a string with only X’s you have to print how many X’s there are.j

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare a string to hold the input
    string input_string;

    // Read the input string
    cin >> input_string;

    // The length of the string is equal to the number of 'X's
    cout << input_string.length() << endl;

    return 0;
}
