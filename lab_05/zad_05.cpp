#include <iostream>
using namespace std;

void funkt(float in, int &out_total, float &out_fraction){

    out_total = static_cast<int>(in);
    out_fraction = in - out_total;

}


int main()
{
    float x = 7.8;
    int total;
    float fraction;
    funkt(x, total, fraction);
    cout << total << " " << fraction << endl;
    return 0;
}
