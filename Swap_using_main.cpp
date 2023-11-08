#include<iostream>
using namespace std;

int main()
{
    int a = 20, b = 30;
    cout << "Before swapping a = " << a << " , b = " << b
         << endl;
    // temporary variable
    int temp;
 
    // appying swapping algorithm
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping a = " << a << " , b = " << b
         << endl;
    return 0;
}
