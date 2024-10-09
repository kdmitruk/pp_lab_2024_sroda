#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    float c;
    cout << "a:" << endl;
    cin >> a;
    cout << "b:" << endl;
    cin >> b;
    c = sqrt(pow(a,2) + pow(b,2));
    //c = hypot(a,b);
    cout << c;

    return 0;
}
