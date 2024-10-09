#include <iostream>

using namespace std;

int main()
{
    double a,b;
    cin >> a;
    cin >> b;
    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
    double temp;
    temp = a;
    a = b;
    b = temp;
    cout << "a =" << a << endl;
    cout << "b =" << b << endl;

    return 0;
}
