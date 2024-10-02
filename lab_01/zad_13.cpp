#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int tranzystory1 = 2250;
    u_int64_t tranzystory2;
    int rok1 = 1971;
    int rok2 = 2023;

    tranzystory2 = tranzystory1 * pow(2, (rok2-rok1)/2);



    cout << tranzystory2 << endl;
    return 0;
}
