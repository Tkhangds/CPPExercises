#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, dem = 0, i = 1;
	cout << "Nhap n: ";
	cin >> n;
	while (i <= n)
	{
		if (n % i == 0)
			dem = dem  + 1;
		i = i + 1;
	}
	if (dem == 2)
		cout << "n la so nguyen to";
	else
		cout << "n ko phai so nguyen to";
	return 1;
}