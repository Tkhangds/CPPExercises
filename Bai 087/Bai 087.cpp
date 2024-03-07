#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	int s = x, t = x, i = 1, dau = -1;
	while (i <= n)
	{
		t = t * x * x;
		s = s + dau * t;
		i = i + 1;
		dau = -dau;
	}
	cout << "S(x,n) = " << s;
	return 1;
}