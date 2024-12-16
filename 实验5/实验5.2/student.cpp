#include<iostream>
#include"student.h"
using namespace std;
void Student::display() {
	if (num > 99 && num<=999) 
		cout << "num: " << num << endl;
	if (num>9 && num<=99)
		cout << "num: 0" << num << endl;
	if (num < 10 && num >=0)
		cout << "num: 00" << num << endl;
	
	cout << "name: " << name <<endl;
	cout << "sex: " << sex << endl;
}
void Student::set_value(int num1,const char* name1,char sex1) {
	this->num = num1;
	int i = 0;
	while (name1[i] != '\0') {
		this->name[i] = name1[i];
		i++;
	}
	name[i] = '\0';
	this->sex = sex1;
}

