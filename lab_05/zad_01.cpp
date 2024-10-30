#include <iostream>
using namespace std;

int suma(int a, int b){
    return a+b;
}
int main()
{
    int x = 5;
    int y = 3;
    int wynik = suma(x,y);
    cout << wynik << endl;
    return 0;
}
