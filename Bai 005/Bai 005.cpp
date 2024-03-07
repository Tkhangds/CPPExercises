#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float r;
	cout << "Nhap r: ";
	cin >> r;
	float dt = 3.14 * pow(r, 3)*(float)4/3;
	cout << "The tich hinh cau la: " << dt;
	return 1;
}