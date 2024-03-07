#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, i;
	cout << "Nhap n: ";
	cin >> n;
	i = 1;
	cout << "Uoc so cua b la: ";
	while (i <= n)
	{
		if (n % i == 0)
			cout << i <<" ";
		i = i + 1;
	}
	return 1;
}