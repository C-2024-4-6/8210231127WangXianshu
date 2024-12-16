#include<iostream>
using namespace std;
class Rectangle {
private:
	double Length, Width, Height;
public:
	Rectangle(double Length = 0, double Width = 0, double Height = 0) {
		this->Length = Length;
		this->Width = Width;
		this->Height = Height;
	}
	void SetLength(double Length) {
		this->Length = Length;
	}
	void SetWidth(double Width) {
		this->Width = Width;
	}
	void SetHeight(double Height) {
		this->Height = Height;
	}
	double Volume() {
		return Length * Width * Height;
	}
};
int main() {
	Rectangle r1, r2, r3;
	double l, w, h;
	cout << "请输入第一个长方体的长、宽、高：";
	cin >> l >> w >> h;
	r1.SetLength(l);r1.SetWidth(w);r1.SetHeight(h); 
	cout << "请输入第二个长方体的长、宽、高：";
	cin >> l >> w >> h;
	r2.SetLength(l);r2.SetWidth(w);r2.SetHeight(h); 
	cout << "请输入第三个长方体的长、宽、高：";
	cin >> l >> w >> h;
	r3.SetLength(l);r3.SetWidth(w);r3.SetHeight(h);
	cout << "第一个长方体的体积为：" << r1.Volume() << endl;
	cout << "第二个长方体的体积为：" << r2.Volume() << endl;
	cout << "第三个长方体的体积为：" << r3.Volume() << endl;
	return 0;
}