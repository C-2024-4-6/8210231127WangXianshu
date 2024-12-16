#include<iostream>
using namespace std;
class Time {
private:
	int hour;
	int minute;
	int sec;
public:
	Time(int hour=0, int minute=0, int sec=0) {
		this->hour = hour;
		this->minute = minute;
		this->sec = sec;
	}
	void ShowTime() {
		cout << "The time is: ";
		cout << hour << ":" << minute << ":" << sec << endl;
	}
	void InputTime() {
		cout << "Please input the time in the format of hh:mm:ss" << endl;
		cin >> hour >> minute >> sec;
	}
};
int main() {
	Time t1;
	t1.InputTime();
	t1.ShowTime();
	return 0;
}