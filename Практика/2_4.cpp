#include <iostream>
using namespace std;

int n;


int main()
{
	cin >> n;
	int space = n / 2;
	int star = 1;
	for (int i = 0; i < (n + 1) / 2; i++)
	{
		for (int j = 0; j < space; j++)
		{
			cout << " ";
		}
		space--;
		for (int j = 0; j < star; j++)
		{
			cout << "*";
		}
		star += 2;
		cout << "\n";
	}
	return 0;
}