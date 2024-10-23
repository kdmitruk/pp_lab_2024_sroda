#include <iostream>
using namespace std;
#define size 5
int main()
{
    //const int size = 5;
    int tabl[size];
    for(int i = 0; i<size; i++){
        cin >> tabl[i];
    }
    for(int i = 0; i<size; i++){
        cout << tabl[i] << "\n";
    }
    return 0;
}
