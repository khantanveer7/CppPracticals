#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 3, 4, 6, 9, 21, 43, 83};
    int len = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}