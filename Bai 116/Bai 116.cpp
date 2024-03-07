#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = 2, att = 1, i = 2, ahh = 0;
	while (i <= n)
	{
		ahh = 4 * at + att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	cout << "A(n) = " << ahh;
	return 1;
}