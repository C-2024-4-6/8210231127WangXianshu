#include<iostream>
using namespace std;
int main() {
	char c;
	cin >> c;
	double x, y, z;
	switch (c)
	{
	case '+':
		cin >> x >> y;
		z = x + y;
		cout << z;
		break;
	case '-':
		cin >> x >> y;
		z = x + y;
		cout << z;
		break;
	case '*':
		cin >> x >> y;
		z = x * y;
		cout << z;
		break;
	case '/':
		cin >> x >> y;
		if (y == 0) {
			cout << "error" << endl;
		}
		else {
			z = x / y;
			cout << z;
		}
		break;
	default:
		break;
	}
	if (c == '%') {
		int x, y, z;
		cin >> x >> y;
		z = x % y;
		cout << z << endl;
	}
	return 0;
}
