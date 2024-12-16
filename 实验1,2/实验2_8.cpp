#include<iostream>
#include<math.h>
using namespace std;
int main() {
	double a;
	cout << "请输入a：" << endl;
	cin >> a;
	double x = a, x1;
	if (a < 0) {
		a = 0 - a;
		x1 = (x + a / x) / 2;
		double x2;
		while (fabs(x1 - x) >= (1e-5)) {
			x = x1;
			x1 = (x + a / x) / 2;
			x2 = fabs(x1);
		}
		cout << "a的平方根为复数，是:" << x2 << 'i' << endl;

	}
	else if (a == 0) {
		x1 = 0;
		cout << "a的平方根为" << x1 << endl;
	}
	else {
		x1 = (x + a / x) / 2;
		while (fabs(x1 - x) >= (1e-10)) {
			x = x1;
			x1 = (x + a / x) / 2;
		}
		cout << "a的平方根为" << x1 << endl;
	}
	return 0;
}
