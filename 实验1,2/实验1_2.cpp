#include <iostream>
using namespace std;
#define PI 3.14159
int main() {
	double r, h, v;
	cout << "请输入圆锥的底面半径的和锥高：" << endl;
	cin >> r >> h;
	v = PI * r * r * h / 3.0;
	cout << "圆锥的体积为：" << v;
	return 0;
}