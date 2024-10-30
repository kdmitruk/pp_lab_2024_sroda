#include <iostream>
#include <iomanip>
using namespace std;

/*int main()
{
    const int size = 16;
    int macierz[size*size];
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size;j++){
            macierz[size*i+j] = (i+1)*(j+1);
        }
    }
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size;j++){
            cout << setw(3)<<macierz[size*i+j] << " ";

        }
        cout<<endl;
    }
}*/
int main()
{
    const int size = 16;
    int macierz[size][size];
    int *macierz2 = (int*)macierz;
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size;j++){
            macierz2[size*i+j] = (i+1)*(j+1);
        }
    }
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size;j++){
            cout << setw(3)<<macierz[i][j] << " ";

        }
        cout<<endl;
    }
}
