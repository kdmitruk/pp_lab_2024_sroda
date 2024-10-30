#include <iostream>
using namespace std;

float funkt(float a){

    return a - static_cast<int>(a);
}


int main()
{
    float x = -3.3;
    float wynik = funkt(x);
    cout << wynik << endl;
    return 0;
}
