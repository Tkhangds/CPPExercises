#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = -2, i = 2, ahh = 0, tt = 3, pp = 7;
	while (i <= n)
	{
		tt = tt * 3;
		pp = pp * 7;
		ahh = 5*at + 2 * tt - 6*pp + 12;
		i = i + 1;
		at = ahh;
	}
	cout << "A(n) = " << ahh;
	return 1;
}