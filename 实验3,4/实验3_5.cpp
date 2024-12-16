#include<iostream>
using namespace std;
int eat_peach(int days, int num = 1) {
	if (days == 1)
		return num;
	else {
		eat_peach(days - 1, (num + 1) * 2);
	}
}
int main() {
	cout << "第一天摘的桃子数为：";
	cout << eat_peach(10, 1) << endl;
	return 0;
}