#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, dem = 0;
	cout << "Nhap n: ";
	cin >> n;
	int flag = 1, i = n, dv;
	while (i != 0)
	{
		dv = i % 10;
		if (dv % 2 != 0)
			flag = 0;
		i = i / 10;
	}
	if (flag == 1)
		cout << "n la so toan chan";
	else
		cout << "n khong phai so toan chan";
	return 1;
}