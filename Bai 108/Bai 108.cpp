#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	float s = 1+x, e = 1;
	int i = 2, t = 1, m = 1;
	while (e >= pow(10, -6))
	{
		t = t * x * x;
		m = m * i;
		e = (float)t / m;
		s = s + e;
		i = i + 1;
	}
	cout << "Tong e^x = " << s;
	return 1;
}