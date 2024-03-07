#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, t, s = 0, dem = 0;
	cout << " Nhap n: ";
	cin >> n;
	t = n;
	int lc = n % 10;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv  > lc )
			lc = dv;
		t = t / 10;
	}
	cout << "Chu so lon nhat cua so nguyen n la: " << lc;
	return 1;
}