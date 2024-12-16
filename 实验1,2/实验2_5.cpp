#include<iostream>
using namespace std;
int main() {
	char c;
	int a = 0, b = 0, d = 0, e = 0;
	while (1) {
		cin.get(c);
		if (c == '\n')
			break;
		else if ((c <= 'z' && c >= 'a') || (c < 'Z' && c >= 'A'))
			a++;
		else if (c == ' ')
			b++;
		else if (c <= '9' && c >= '0')
			d++;
		else
			e++;
	}
	cout << "英文字母数：" << a << "\n空格数：" << b << "\n数字字符数：" << d << "\n其他字符数：" << e << endl;
	return 0;
}
