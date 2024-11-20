#include <iostream>

using namespace std;

int main() {
    int i;
    float f;
    char c;
    char cp[7];
    double d;
/*
    cout << &i << endl;
    cout << &f << endl;
    cout << (void*)&c << endl;
    cout << (void*)cp << endl;
    cout << &d << endl;
*/

    cout << (char*)&i - (char*)&i << endl;
    cout << (char*)&f - (char*)&i << endl;
    cout << (char*)&c - (char*)&i << endl;
    cout << (char*)cp - (char*)&i << endl;
    cout << (char*)&d - (char*)&i << endl;

}
