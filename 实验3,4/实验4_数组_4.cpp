#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int l = 0, r = 0, t = 0;
	while ((l < size1) && (r < size2)) {
		if (list1[l] < list2[r]) {
			list3[t] = list1[l];
			l++;
		}else{
			list3[t] = list2[r];
			r++;}
		t++;}
	if (l == size1) {
		for (; r < size2; r++) {
			list3[t] = list2[r];
			t++;}}
	else{
		for (; l < size1; l++) {
			list3[t] = list1[l];
			t++;}}}
int main() {
	int size1, size2;

	cout << "Enter list1:";
	cin >> size1;
	int* list1 = new int[size1];
	for (int i = 0; i < size1; i++)
		cin >> list1[i];
	cout << "Enter list2:";
	cin >> size2;
	int* list2 = new int[size2];
	for (int i = 0; i < size2; i++)
		cin >> list2[i];
	int size3 = size1 + size2;
	int* list3 = new int[size3];
	cout << "The merged list is:";
	merge(list1, size1, list2, size2, list3);
	for (int i = 0; i < size3; i++)
		cout << list3[i] << " ";
	delete[]list3;
	delete[]list2;
	delete[]list1;
	return 0;
}