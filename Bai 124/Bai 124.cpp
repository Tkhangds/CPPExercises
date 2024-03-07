#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, i = 2;
	cout << "Nhap n: ";
	cin >> n;
	float at = 2, bt = 1, bhh = 0, ahh = 0;
	while (i <= n)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		i = i + 1;
		bt = bhh;
		at = ahh;
	}
	cout << "A(n) = " << ahh << endl;
	cout << "B(n) = " << bhh;
	return 1;
}