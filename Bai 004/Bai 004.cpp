#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float r;
	cout << "Nhap r: ";
	cin >> r;
	float dt = 3.14 * pow(r, 2) * 4;
	cout << "Dien tich xung quanh hinh cau: " << dt;
	return 1;
}