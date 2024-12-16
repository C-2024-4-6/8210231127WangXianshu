#include<iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point(int x=60, int y=80) {
		this->x = x;
		this->y = y;
	}
	void display() {
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
	}
	void setPoint(int x, int y) {
		this->x = x+this->x;
		this->y = y + this->y;
	}
};
int main() {
	Point p;
	cout << "初始点为：" << endl;
	p.display();
	p.setPoint(1, 2);
	cout << "修改后的点为："<<endl;
	p.display();
	Point p1(10, 20);
	cout << "初始点为：" << endl;
	p1.display();
	p1.setPoint(3, 4);
	cout << "修改后的点为："<<endl;
	p1.display();
	return 0;
}