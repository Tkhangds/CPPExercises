#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int  m = 0, i = 1;
	float s = 0;
	while (i <= n)
	{
		m = m + i;
		s = s + ((float)1 / m);
		i = i + 1;
	}
	cout << "Tong S(n) = " << s;
	return 1;
}