#include <iostream>
using namespace std;

int main()
{
    int b = 0;
    int a[5] = {};
    int len = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < len; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}