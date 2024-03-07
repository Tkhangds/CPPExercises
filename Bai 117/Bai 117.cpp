#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = 3, att = -1,tt = 2, i = 2, ahh = 0;
	while (i <= n)
	{
		tt = tt * 2;
		ahh = 5 * tt + 5 * at - att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	cout << "A(n) = " << ahh;
	return 1;
}