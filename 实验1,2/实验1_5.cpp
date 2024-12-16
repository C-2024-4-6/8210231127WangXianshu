#include<iostream>
#include <iomanip>
using namespace std;
int main() {
	cout << "请输入温度（华氏度）：" << endl;
	float f, t;
	cin >> f;
	t = (f - 32.0) * 5.0 / 9;
	cout << "温度为：" << setiosflags(ios::fixed) << setprecision(2) << t;
	return 0;
}
