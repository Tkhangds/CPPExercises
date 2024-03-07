#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, x, s = 0, t = 1, i = 2;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	while (i <= 2*n)
	{
		t = t * x * x;
		s = s + t;
		i = i + 2;
	}
	cout << "Tong S(x,n) = " << s;
	return 1;
}