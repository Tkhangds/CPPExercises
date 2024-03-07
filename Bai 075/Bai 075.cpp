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
	int  t = 1, m = 1, i = 1;
	float s = 1;
	while (i <= 2*n)
	{
		t = t * x * x;
		m = m * i * (i + 1);
		s = s + ((float)t / m);
		i = i + 2;
	}
	cout << "Tong S(x,n) = " << s;
	return 1;
}