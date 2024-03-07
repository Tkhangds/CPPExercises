#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	float s = 1, e = 1;
	int i = 1, t = 1, m = 1, dau = -1;
	while (abs(e) >= pow(10, -6))
	{
		t = t * x * x;
		m = m * i * (i + 1);
		e = dau * (float)t / m;
		s = s + e;
		i = i + 2;
		dau = -dau;
	}
	cout << "Tong Cos(x) = " << s;
	return 1;
}