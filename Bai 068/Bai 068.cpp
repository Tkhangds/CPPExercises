#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, s = 0, t = 1, i = 1;
	cout << "Nhap n: ";
	cin >> n;
	while (i <= n)
	{
		t = t * i;
		s = s + t;
		i = i + 1;
	}
	cout << "Tong S(n) = " << s;
	return 1;
}