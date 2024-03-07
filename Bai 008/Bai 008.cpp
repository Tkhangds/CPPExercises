#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float r;
	int n;
	cout << "Nhap r: ";
	cin >> r;
	cout << "Nhap n: ";
	cin >> n;
	float dt = r * 2 * n * sin(3.14/n);
	cout << "Chu vi da giac la: " << dt;
	return 1;
}