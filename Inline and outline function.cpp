#include<iostream>
#include<cmath>
using namespace std;

int main(){

    //01.  The fabs() function in C++ returns the absolute value of the argument.
    //02.  The fabs() function takes a single argument and returns a value of type double, float or long double type.
    //03.  The fabs() function takes a single argument, x whose absolute value is returned.
    //04.  The fabs() function returns the absolute value of x i.e. |x|.

    double x = -10.25, result;
    result = fabs(x);
    cout << "fabs(" << x << ") = |" << x << "| = " << result << endl;

    long int x = -23;
    double result;

    result = fabs(x);
    cout << "fabs(" << x << ") = |" << x << "| = " << result << endl;




    //C++ fdim()


    return 0;
}
33 changes: 33 additions & 0 deletions33
24-C++ClassMethods/Inline and Outline Function/tutorial.cpp
@@ -0,0 +1,33 @@
#include<iostream>
using namespace std;

class lecture{
    public:
    int num1, num2;

    void input();       //function declaration
    void calculate();   //function declaration

};

void lecture::input(){
    cout<<"Enter two numbers = ";
    cin>>num1>>num2;
}

void lecture::calculate(){
    int result = num1 + num2;
    cout<<"Sum = "<<result;
}

//funtion type class name::function name(){}



int main(){
    lecture myObj;
    myObj.input();
    myObj.calculate();

    return 0;
}
