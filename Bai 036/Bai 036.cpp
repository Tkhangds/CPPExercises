#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,x;
	float s = 1;
	int i = 1;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	while (i <= n)
	{
		s = s * x;
		i = i + 1;
	}
	cout << "Tich T(x,n) = " << s;
	return 1;
}