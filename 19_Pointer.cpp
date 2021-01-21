#include <iostream>

using namespace std;
int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;

    cout << "Printing Address of int a " << endl;
    cout << ptr << endl;
    cout << "Printing the Value of int a " << endl;
    cout << *ptr << endl;

    return 0;
}