#include <iostream>

using namespace std;

int main()
{
    float x;
    cout << "podaj liczby zmiennoprzecinkowe" << endl;
    float sum=0;
    do{
        cin >> x;
        sum += x;
    }
    while (x != 0);
    cout << sum;
    return 0;
}
