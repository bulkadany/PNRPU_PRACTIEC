#include <iostream>
using namespace std;

int n;
int sum, p = 0;

int main()
{
	cin >> n;
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		p = 1;
		for (int j = i; j <= i * 2; j++)
		{
			cout << j << '*';
			p *= j;
		}
		cout << '+';
	    sum += p;
	}
	cout << '=';
	cout << sum;
	return 0;
}