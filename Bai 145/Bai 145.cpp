#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, flag = 0, i = 0;
	cout << "Nhap n: ";
	cin >> n;
	while (i <= n)
	{
		if (i * i == n)
			flag = 1;
		i = i + 1;
	}
	if (flag == 1)
		cout << "n la so chinh phuong";
	else
		cout << "n ko phai so chinh phuong";
	return 1;
}