#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	float s = x, e = 1;
	int i = 2, t = x, m = 1, dau = -1;
	while (abs(e) >= pow(10, -6))
	{
		t = t * x * x;
		m = m * i * (i + 1);
		e = dau*(float)t / m;
		s = s + e;
		i = i + 2;
		dau = -dau;
	}
	cout << "Tong Sin(x) = " << s;
	return 1;
}