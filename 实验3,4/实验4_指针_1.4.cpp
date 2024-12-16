#include<iostream>
using namespace std;
int* f()
{
	int* list = new int[4];
	*list = 1;
	*(list+1) = 2;
	*(list+2) = 3;
	*(list+3) = 4;
	return list;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
}
