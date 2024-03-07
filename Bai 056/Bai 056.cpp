#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, i, s, dem;
	cout << "Nhap n: ";
	cin >> n;
	i = 2;
	s = 1;
	dem = 0;
	while (i <= n)
	{
		if (n % i == 0)
			dem ++;
		i = i + 2;
	}
	cout << "So luong cac uoc chan cua n la: " << dem;
	return 1;
}