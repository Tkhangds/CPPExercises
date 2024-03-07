#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, n, m, N;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	m = abs(a);
	n = abs(b);
	while (m * n != 0)
		if (m > n)
			m = m - n;
		else
			n = n - m;
	N = n + m;
	cout << "Boi chung nho nhat cua m va n la: " << abs(a*b)/(N);
	return 1;
}