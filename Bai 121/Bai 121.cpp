#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, i = 2;
	cout << "Nhap n: ";
	cin >> n;
	float at = 1,att = 1, ahh = 0;
	while (i <= n)
	{
		ahh = at + att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	cout << "F(n) = " << ahh;
	return 1;
}