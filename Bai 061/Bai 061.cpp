#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, t, s = 0,dem = 0;
	cout << " Nhap n: ";
	cin >> n;
	t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			dem++;
		t = t / 10;
	}
	cout << "So luong chu so le cua n la: " << dem;
	return 1;
}