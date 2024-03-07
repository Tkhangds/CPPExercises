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
	int  s = x, t = x, i = 3;
	while (i <= (2 * n + 1))
	{
		t = t * x * x;
		s = s + t;
		i = i + 2;
	}
	cout << "Tong S(x,n) = " << s;
	return 1;
}