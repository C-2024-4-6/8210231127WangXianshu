
#include"student.h"
using namespace std;
int main() {
	Student stud;
	//Student stud1(7, "tcg", 'm');
	stud.set_value(7,"tcg",'m');
	stud.display();
	return 0;
}