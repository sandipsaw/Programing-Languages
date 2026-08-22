#include <iostream>
using namespace std;

int main(){
    int i;
    cout << "Garbage value = " << i << endl;
    cout << "Print an unpredictable garbage value becouse the local variable was never initialised" ;
    return 0;
}