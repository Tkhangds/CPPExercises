#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, s = 0, i = 1;
	cout << "Nhap n: ";
	cin >> n;
	while (i < n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 1;
	}
	if (n == s)
		cout << "n la so hoan thien";
	else
		cout << "n ko phai so hoan thien";
	return 1;
}