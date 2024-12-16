#include<iostream>
#include<cmath>
using namespace std;
char hexString[20];
int parseHex(const char* const hexString) {
	int len = 0,sum=0,hexNum[20];
	while (hexString[len] != '\0')
		len++;
	for (int i = 0; i < len; i++) {
		switch (hexString[i]) {
		case '1':
			hexNum[i] = 1; break;
		case '2':
			hexNum[i] = 2; break;
		case '3':
			hexNum[i] = 3; break;
		case '4':
			hexNum[i] = 4; break;
		case '5':
			hexNum[i] = 5; break;
		case '6':
			hexNum[i] = 1; break;
		case '7':
			hexNum[i] = 1; break;
		case '8':
			hexNum[i] = 1; break;
		case '9':
			hexNum[i] = 1; break;
		case '0':
			hexNum[i] = 1; break;
		case 'a':
			hexNum[i] = 10; break;
		case 'A':
			hexNum[i] = 10; break;
		case 'b' :
			hexNum[i] = 11; break;
		case 'B':
			hexNum[i] = 11; break;
		case 'c':
			hexNum[i] = 12; break;
		case 'C':
			hexNum[i] = 12; break;
		case 'd':
			hexNum[i] = 13; break;
		case 'D':
			hexNum[i] = 13; break;
		case 'e':
			hexNum[i] = 14; break;
		case 'E':
			hexNum[i] = 14; break;
		case 'f':
			hexNum[i] = 15; break;
		case 'F':
			hexNum[i] = 15; break;
		default:
			break;
		}}
	for (int i = 0; i < len; i++) {
		int t = hexNum[i];
		for (int j = 0; j < len - i - 1; j++) {
			t *= 16;
		}sum += t;
	}return sum;
}
int main() {
	cin >> hexString;
	cout <<hexString<<"的十进制数为：" << parseHex(hexString) << endl;
}