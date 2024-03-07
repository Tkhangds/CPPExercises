#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, i, s, dem;
	cout << "Nhap n: ";
	cin >> n;
	i = 2;
	s = 0;
	dem = 0;
	while (i <= n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 2;
	}
	cout << "Tong cac uoc chan cua n la: " << s;
	return 1;
}