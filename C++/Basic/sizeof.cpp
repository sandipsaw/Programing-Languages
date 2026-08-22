#include <iostream>
using namespace std;
int main(){
    int i = 12;
    long l = 145265;
    float f = 12.58;
    double d = 1452.45;
    char c = 'a';
    bool b = true;

    cout << "Size of integer : " << sizeof(i) << endl;
    cout << "Size of long : " << sizeof(l) << endl;
    cout << "Size of float : " << sizeof(f) << endl;
    cout << "Size of double : " << sizeof(d) << endl;
    cout << "Size of char : " << sizeof(c) << endl;
    cout << "Size of boolean : " << sizeof(b) << endl;
    return 0;
}