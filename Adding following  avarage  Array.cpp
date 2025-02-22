#include <iostream>
using namespace std;

int main() {

  // initialize an array without specifying size
 double numbers[] = {10, 10, 10, 2, 5};

 double sum = 0;

  //  print array elements
  // use of range-based for loop
  for (const double &n : numbers) {
    cout << n << "  ";

    //  calculate the sum
    sum += n;
  }

  // print the sum
  cout << "\n Sum = " << sum << endl;
  return 0;
}
