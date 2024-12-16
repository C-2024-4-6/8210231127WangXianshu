#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	int i = 0, k = -1;
	while (s2[i] != '\0') {
		if (s2[i] == s1[0]) {
			int ii = 0;
			while (s1[ii] != '\0') {
				if (s2[i + ii] != s1[ii])
					break;
				ii++;
			}
			if (s1[ii] == '\0') {
				k = i;
				break;}}
		i++;}
	return k;
}
int main() {
	char s1[1024];
	char s2[1024];
	cout << "Enter the first string:";
	cin.getline(s1, 1024);
	cout << "Enter the second string:";
	cin.getline(s2, 1024);
	int k = indexOf(s1, s2);
	cout << "indexOf(\""<<s1<<"\",\"" <<s2 << "\") is " << k << endl;
}