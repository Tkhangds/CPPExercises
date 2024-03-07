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
	cout << "So luong uoc le cua n la: ";
	while (i <= n)
	{
		if (n % i == 0)
			cout << i << " ";
		i = i + 2;
	}
	return 1;
}