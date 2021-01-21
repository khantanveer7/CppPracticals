#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << a << " is the Greater Number";
    }
    else if (b > a && b > c)
    {
        cout << b << " is the Greater Number";
    }
    else
    {
        cout << c << " is the Greater Number";
    }

    return 0;
}