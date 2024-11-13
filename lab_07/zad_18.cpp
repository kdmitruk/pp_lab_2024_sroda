#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int size = 16;
    int macierz[size][size];
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size;j++){
            macierz[i][j] = (i+1)*(j+1);
        }
    }
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size;j++){
            cout << setw(3)<<macierz[i][j] << " ";

        }
        cout<<endl;
    }
    return 0;
}
