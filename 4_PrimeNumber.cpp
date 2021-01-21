#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a <= 1)
    {
        cout << "Neither prime nor composite number";
    }

    for (int i = 2; i < a; i++)
        if (a % i == 0)
        {
            cout << "Not Prime Number";
            break;
        }
        else
        {
            cout << "Prime Number";
            break;
        }

    return 0;
}