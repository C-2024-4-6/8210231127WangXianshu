#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Student {
private:
	int id,score;
public:
	Student(int id, int grade) {
		this->id = id;
		this->score = grade;
	}
	int get_id() {
		return this->id;
	}
	int get_grade() {
		return this->score;
	}
};

void max(Student* p) {
	Student* max;
	int id, score;
	max = &p[0];
	id = p[0].get_id();
	score = p[0].get_grade();
	for (int i = 0; i < 5; i++) {
		if (p[i].get_grade() > score) {
			max = &p[i];
			id = p[i].get_id();
			score = p[i].get_grade();
		}
	}
	cout << "成绩最高者为学号为" << max->get_id() << "的学生，成绩为" << max->get_grade() << endl;
}

int main() {
	Student s1(12345, 76), s2(24312, 89), s3(13483, 93), s4(41342, 74), s5(54104, 68);
	Student students[5] = { s1, s2, s3,s4,s5 };
	Student* p = students;
	max(p);
	return 0;
}