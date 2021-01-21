#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 1;
    do
    {
        cout << "2 x " << b++ << " = " << 2 * a << endl;
        a++;
    } while (a < 11);

    return 0;
}