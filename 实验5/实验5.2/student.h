using namespace std;
class Student {
private:
    int num;
    char name[20];
    char sex;
public:
    void display();
    void set_value(int num1,const char *name1 ,char sex1);
};