#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, i, s;
	cout << "Nhap n: ";
	cin >> n;
	i = 1;
	s = 1;
	while (i <= n)
	{
		if (n % i == 0)
			s = s * i;
		i = i + 1;
	}
	cout << "Tich cac uoc cua n la: " << s;
	return 1;
}