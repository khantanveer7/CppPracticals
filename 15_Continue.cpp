#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    do
    {
        if (a == 5)
        {
            a++;
            continue;
        }
        cout << a << "  ";
        a++;
    } while (a < 11);

    return 0;
}