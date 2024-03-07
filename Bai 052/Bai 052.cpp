#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, i, s, dem;
	cout << "Nhap n: ";
	cin >> n;
	i = 1;
	s = 1;
	dem = 0;
	while (i <= n)
	{
		if (n % i == 0)
			dem ++;
		i = i + 1;
	}
	cout << "So luong uoc cua n la: " << dem;
	return 1;
}