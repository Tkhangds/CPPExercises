#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, x;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap k: ";
	cin >> x;
	int  t = x, m = 1, i = 1;
	float s = 0;
	while (i <= n)
	{
		s = s + pow(i,x);
		i = i + 1;
	}
	cout << "Tong S(n,k) = " << s;
	return 1;
}