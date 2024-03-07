#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	float s = 0;
	int i = 1;
	cout << "Nhap n: ";
	cin >> n;
	while (i <= n)
	{
		s = s + sqrt(1 + 1/pow(i,2) + 1/pow(i+1,2));
		i = i + 1;
	}
	cout << "Tong s(n) = " << s;
	return 1;
}