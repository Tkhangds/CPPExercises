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
	int t = x, m = 1, i = 2, dau = 1;
	float s = 1-x;
	while (i <= 2*n + 1)
	{
		t = t * x * x;
		m = m * i * (i+1);
		s = s + dau * (float)t / m;
		i = i + 2;
		dau = -dau;
	}
	cout << "S(x,n) = " << s;
	return 1;
}