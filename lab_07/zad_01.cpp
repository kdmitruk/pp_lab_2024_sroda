#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int r;
    int h;
    cin >> r >> h;
    //(objętość stożka V=PI r^2 h / 3)
    if(r <= 0 || h <= 0){
        cout << "nie" << endl;
    }
    else{
        cout << M_PI * pow(r, 2) * h / 3;
    }
    return 0;
}
