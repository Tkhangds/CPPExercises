#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = n;
	float s = 0;
	while (i >= 1)
	{
		s = sqrt(i + s);
		i = i - 1;
	}
	cout << "S(n) = " << s;
	return 1;
}