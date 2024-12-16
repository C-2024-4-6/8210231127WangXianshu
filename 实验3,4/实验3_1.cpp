#include <iostream>
using namespace std;
int fun_max(int a, int b);
int fun_min(int a, int b);
int main(){
	int a, b; 
	cout << "请输入两个数:";
	cin >> a >> b;
	if (a < b) {
		int t = a;
		a = b; b = t;}
	cout << a<<"和"<<b<<"的最大公约数为：";
	cout << fun_max(a, b) << endl;
	cout << a << "和" << b << "的最小公倍数为：";
	cout << fun_min(a, b) << endl;
}
int fun_max(int a, int b){
	while (a % b != 0){
		int c = a % b;
		a = b;
		b = c;}
	return b;
}
int fun_min(int a, int b) {
	int c = a;
	int i = c;
	for (; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			break;}}
	return i;
}

