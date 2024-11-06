#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const int size = 50;
    char tab[size] = "kuba";
    char tab1[size];
    int i=0;
    for (; tab[i]!='\0'; i++)
    {
        tab1[i] = tab[i];
    }
    tab1[i] = '\0';
    cout << tab1 << endl;
    return 0;
}
