#include <iostream>

using namespace std;

int p, t;

int main()
{
	bool flag1 = false;
	bool flag2 = true;
	cin >> p;
	if (p == 0)
	  flag1 = true;

	while (!flag1)
	{
		cin >> t;
		if (t == 0) flag1 = true;
		if (t < p && t != 0) flag2 = false;
		p = t;
	}
	if (flag2) cout << "Yes";
	else cout << "No";

	return 0;
}
