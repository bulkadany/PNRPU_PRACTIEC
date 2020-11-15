#include <iostream>
#include <cmath>
using namespace std;

int n;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "* ";
    }
    cout << endl;
    for (int i = 0; i < n - 2; i++)
    {
        cout << "* ";
        for (int j = 0; j < n - 2; j++)
        {
            cout << "  ";
        }
        cout << "* " << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        cout << "* ";
    }
    cout << endl;
    return 0;
}

