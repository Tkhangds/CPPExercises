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
	int  t = x, m = 1, i = 0;
	float s = 0;
	while (i <= n)
	{
		m = m * (i + x);
		s = s + ((float)1 / m);
		i = i + 1;
	}
	cout << "Tong S(x,n) = " << s;
	return 1;
}