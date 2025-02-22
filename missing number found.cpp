//missing number
#include <iostream>
using namespace std;

int main() {
    int total_sum, num1, num2, num3;

    // Read the total sum of the four numbers and three of the numbers
    cin >> total_sum;
    cin >> num1 >> num2 >> num3;

    // Calculate the missing number by subtracting the sum of the three known numbers from the total sum
    int missing_number = total_sum - (num1 + num2 + num3);

    // Output the missing number
    cout << missing_number << endl;

    return 0;
}
