#include <iostream>
#include<vector>
using namespace std;
int main(){
    int a[10];
    vector<int> b;
    cout << "Enter ten numbers:";
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++) {
        bool flag = false;
        int sizeb = b.size();
        for (int j = 0; j < sizeb; j++) {
            if (a[i] == b[j])
                flag = true;
        }if (!flag) {
            b.push_back(a[i]);
        }
    }
    int t = b.size();
    cout << "The distinct numbers are:";
    for (int i = 0; i < t; i++) {
        cout << b[i] << " ";
    }cout << endl;
}
