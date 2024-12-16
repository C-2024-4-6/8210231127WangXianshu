#include<iostream>
using namespace std;

int main() {
	bool l[101];
	for (int i = 1; i <= 100; i++)
		l[i] = false;
	for (int i = 1; i <= 100; i++) {
		for (int j = i; j <= 100; j++) {
			if (j % i == 0)
				l[j] = (!l[j]);
		}
	}cout << "开着的柜子号码为：";
	for (int i = 1; i <= 100; i++) {
		if (l[i])
			cout << i<<" ";
	}
	return 0;
}