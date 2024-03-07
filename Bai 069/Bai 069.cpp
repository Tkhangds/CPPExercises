#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, x, s = 0, t = 1, i = 1;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	while (i <= n)
	{
		t = t * x;
		s = s + t;
		i = i + 1;
	}
	cout << "Tong S(x,n) = " << s;
	return 1;
}