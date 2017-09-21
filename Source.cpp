#include <iostream>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int n;
	cin >> n;
	while (n--)
	{
		int c, r, x, y;
		cin >> c >> r;
		if ((c - 2) % 3)
			x = (c - 2) / 3 + 1;
		else
			x = (c - 2) / 3;
		if ((r - 2) % 3)
			y = (r - 2) / 3 + 1;
		else
			y = (r - 2) / 3;
		cout << x*y << endl;
	}
	return 0;
}