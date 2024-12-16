#include<iostream>
using namespace std;
int main() {
	double x, y;
	cout << "请输入x:" << endl;
	cin >> x;
	if (x > 0 && x < 1) {
		y = 3 - 2 * x;
		cout << "y=" << y << endl;
	}
	else if (x >= 1 && x < 5) {
		y = 2.0 / (4 * x) + 1;
		cout << "y=" << y << endl;
	}
	else if (x >= 5 && x < 10) {
		y = x * x;
		cout << "y=" << y << endl;
	}
	else {
		cout << "你输入的x的不对" << endl;
	}
	return 0;

}
