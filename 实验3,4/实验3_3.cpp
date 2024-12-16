#include <iostream>
#include"mytemperature.h"
using namespace std;
int main(){
	double a, b, c;
	cout << "请输入三边长:";
	cin >> a >> b >> c;
	cout << double_area(a, b, c) << endl;
}