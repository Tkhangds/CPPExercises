#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	int  t = 1, m = 1, i = 1;
	float s = 1;
	while (i <=  n)
	{
		t = t  * x;
		s = s + t ;
		i = i + 1;
	}
	cout << "Tong S(x,n) = " << s;
	return 1;
}