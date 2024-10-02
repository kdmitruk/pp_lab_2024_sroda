#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    //float sa = (float)(x+y+z)/3;
    //float sa = static_cast<float>(x+y+z)/3;
    float sa = (x+y+z)/3.f;
    cout << sa << endl;
    return 0;
}
