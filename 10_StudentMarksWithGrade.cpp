#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cout << "Enter Physics Marks" << endl;
    cin >> a;
    cout << "Enter Chemistry Marks" << endl;
    cin >> b;
    cout << "Enter Maths Marks" << endl;
    cin >> c;
    cout << "Enter English Marks" << endl;
    cin >> d;
    cout << "Enter Vocation Marks" << endl;
    cin >> e;
    int sum = (a + b + c + d + e);
    float result = sum * 100 / 500;
    cout << "Percentange is " << result << endl;

    if (result >= 90)
    {
        cout << "Grade A";
    }
    else if (result >= 80)
    {
        cout << "Grade B";
    }
    else if (result >= 70)
    {
        cout << "Grade C";
    }
    else if (result >= 60)
    {
        cout << "Grade D";
    }
    else
    {
        cout << "Grade F";
    }

    return 0;
}