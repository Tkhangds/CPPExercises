#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, i = 2;
	cout << "Nhap n: ";
	cin >> n;
	float at = 1, bt = 1, bhh = 0, ahh = 0;
	while (i <= n)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i = i + 1;
		bt = bhh;
		at = ahh;
	}
	cout << "A(n) = " << ahh << endl;
	cout << "B(n) = " << bhh;
	return 1;
}