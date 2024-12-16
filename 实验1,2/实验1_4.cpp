#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	unsigned int testUnint = 65534;
	cout << "ouput in oct unsigned int type:\t" << oct << testUnint << endl;
	double num;
	cout << "请输入一个实数：" << endl;
	cin >> num;
	cout << "output " << num << " in int type:" << static_cast<int>(num) << endl;
	system("pause");
	return 0;
}
