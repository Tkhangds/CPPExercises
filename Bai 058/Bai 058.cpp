#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,t,s= 0;
	cout << " Nhap n: ";
	cin >> n;
	t = n;
	while (t != 0)
	{
		int dv = t % 10;
		s = s + dv;
		t = t / 10;
	}
	cout << "Tong cac chu so cua n la: " << s;
	return 1;
}