#include<iostream>
using namespace std;
bool is_prime(int num) {
	if (num == 1)
		return false;
	if (num == 2)
		return true;
	for (int i = 2; i <num; i++) {
		if (num % i == 0) {
			return false;
			break;}}
	return true;
}
int main() {
	int line = 0;
	for (int i = 1; i <= 200; i++) {
		if (is_prime(i)) {
			cout << i << "\t";
			line++;
		}if (line == 10) {
			cout << endl;
			line = 0;
		}
	}
	return 0;
}