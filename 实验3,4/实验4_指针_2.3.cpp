#include<iostream>
using namespace std;
int main() {
    int n;
	cout << "请输入数组元素个数：";
	cin >> n;
    int* p = new int[n];
	cout << "请输入数组元素：";
	for (int i = 0; i < n; i++)
		cin >> p[i];
    for (int i = 0; i < n; i++) 
        cout <<"数组中 " << p[i] << "的地址为：" << p + i << endl;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++)
            if (p[j] > p[j + 1]) {
                int temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
    }
    cout << "排序后的数组为：";
	for (int i = 0; i < n; i++)
		cout << p[i] << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << "数组中 " << p[i] << "的地址为：" << p + i << endl;
	delete[]p;
	return 0;
}
