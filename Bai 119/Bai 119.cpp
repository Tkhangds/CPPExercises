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
		ahh = (float)(at * at + 2) / (2 * at);
		i = i + 1;
		at = ahh;
	}
	cout << "A(n) = " << ahh;
	return 1;
}