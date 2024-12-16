#include<iostream>
using namespace std;
int main() {
	float a = 2, i = 1, sum = 2, p;
	while (sum <= 100) {
		a *= 2;
		sum += a;
		i++;
	}
	p = sum * 0.8 / i;
	cout << "每天花：" << p << "元" << endl;
	return 0;
}
