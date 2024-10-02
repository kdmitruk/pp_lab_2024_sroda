#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long int tran1 = 2'250, tran2 = 5'000'000'000;
    int rok1 = 1971, rok2 = 2012;
    int mies = (rok2 - rok1)*12;
    float x = mies/log2((float)tran2/tran1);
    cout << x << endl;
    return 0;
}
