#include<iostream>
using namespace std;
int main() {
	double x, y, z;
	cout << "请输入三角形的三边：" << endl;
	cin >> x >> y >> z;
	if ((x + y <= z) || (x + z <= y) || (y + z <= x)) {
		cout << "你输入的边不能构成三角形" << endl;
	}
	else {
		if ((x == y) || (x == z) || (y == z)) {
			cout << "这是等腰三角形" << endl;
		}
		else {
			cout << "这不是等腰三角形" << endl;
		}
	}return 0;
}
