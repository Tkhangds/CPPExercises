#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, t, s = 1, dem = 0;
	cout << " Nhap n: ";
	cin >> n;
	t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			s = s * dv;
		t = t / 10;
	}
	cout << "Tich cac chu so le cua n la: " << s;
	return 1;
}