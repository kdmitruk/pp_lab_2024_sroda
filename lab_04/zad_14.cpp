#include <iostream>

using namespace std;

int main()
{
    char tekst[20];//= "Dzien dobry";

    //cin >> tekst;
    cin.getline(tekst,20);
    cout << tekst;
    return 0;
}
