#include <iostream>
using namespace std;
int a, b, c;
int main()
{
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > c)
    {
        if (a > b)
        {
            cout << a;
        }
        else
        {
            cout << b;
        }

    }
    else
    {
        if (b > c)
        {
            cout << b;
        }
        else
        {
            cout << c;
        }
    }

    return 0;
}