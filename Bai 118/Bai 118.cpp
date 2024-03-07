#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, i = 2;
	cout << "Nhap n: ";
	cin >> n;
	float at = 2, ahh = 0;
	while (i <= n)
	{
		ahh = (float)(-9 * at - 24) / (5 * at + 13);
		i = i + 1;
		at = ahh;
	}
	cout << "A(n) = " << ahh;
	return 1;
}