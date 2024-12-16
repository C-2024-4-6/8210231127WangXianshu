#include<iostream>
using namespace std;
int main() {
	int a, b, c, d, t;
	cout << "请输入两个数" << endl;
	cin >> a >> b;
	if (a < b) {
		t = a;
		a = b;
		b = t;
	}
	c = b;
	while (b % c != 0 || a % c != 0) {
		c--;
	}
	d = a;
	while (d % a != 0 || d % b != 0) {
		d++;
	}
	cout << "最大公因数为：" << c << "\n最小公倍数为：" << d << endl;
	return 0;
}
