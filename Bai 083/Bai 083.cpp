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
	int   m = 1, i = 1;
	float s = 0, t = 1;
	while (i <= n)
	{
		t = t * x;
		s = s + sin(t);
		i = i + 1;
	}
	cout << "Tong S(x,n) = " << s;
	return 1;
}