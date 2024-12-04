#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 6;
    int z = 3;
    int ***array = new int**[y];
    for(int k = 0; k < z; k++){
        array[k] = new int*[y];
        for(int j = 0; j < y; j++)
            array[k][j] = new int[x];
    }
    for(int k = 0; k < z; k++)
        for(int j = 0; j < y; j++)
            for (int i = 0; i < x; i++)
                array[k][j][i] = k * 100 + j * 10 + i;

    for(int k = 0; k < z; k++){
        for(int j = 0; j < y; j++){
            for (int i = 0; i < x; i++)
                cout<<array[k][j][i]<<" ";
            cout<<endl;
        }
        cout<<endl<<endl;
    }

    for(int k = 0; k < z; k++){
        for(int j = 0; j < y; j++)
            delete[] array[k][j];
        delete[] array[k];
    }
    delete[] array;
    return 0;
}
