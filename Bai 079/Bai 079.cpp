#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int  t = 1, m = 1, i = 1;
	float s = 0;
	while (i <= n)
	{
		t = t * i;
		s = s + i*t;
		i = i + 1;
	}
	cout << "Tong S(n) = " << s;
	return 1;
}