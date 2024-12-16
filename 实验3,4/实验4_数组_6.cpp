#include<iostream>
using namespace std;
int counts[26];
char s[1024];
void count(const char s[], int counts[]){
	int i = 0;
	for (int i = 0; i < 26; i++)
		counts[i] = 0;
	while (s[i] != '\0') {
		for (int j = 0; j < 26; j++)
			if ((s[i] == 'a' + j) || (s[i] == 'A' + j))
				counts[j]++;
		i++;}}
int main() {
	cout << "Enter a string:";
	cin.getline(s, 1024);
	count(s, counts);
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0) {
			char k = 'a' + i;
			cout << k << ": " << counts[i] << " times" << endl;
		}
	}
	return 0;
}