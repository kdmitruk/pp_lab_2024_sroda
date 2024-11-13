#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char tekst[20];//= "Dzien dobry";
    //cin >> tekst;
    cin.getline(tekst,20);
    //cout << strlen(tekst);
    int len;
    for(len = 0; tekst[len] != '\0'; len++);
    cout << len << endl;

    return 0;
}
