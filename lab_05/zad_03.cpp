#include <iostream>
using namespace std;

float dwukrotnosc(float a){
   return static_cast<int>(a*2);

}

int main()
{
    float x = 3.3;
    float wynik = dwukrotnosc(x);
    cout << wynik << endl;
    return 0;
}
