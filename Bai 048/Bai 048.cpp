#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,x;
	int i = 1;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float s = x;
	while (i <= n)
	{
		s = s*(x + i);
		i = i + 1;
	}
	cout << "Tich s(x,n) = " << s;
	return 1;
}