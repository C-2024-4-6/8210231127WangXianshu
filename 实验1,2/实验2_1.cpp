#include<iostream>
using namespace std;
int main() {
	char c, a;
	cout << "请输入一个字符" << endl;
	cin >> c;
	if (c >= 'a' && c <= 'z') {
		a = c & 0b11011111;
		printf("%c", a);
	}
	else {
		a = c + 1;
		printf("%d", a);
	}
	return 0;
}
