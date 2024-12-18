#include <iostream>
using namespace std;

bool fun(int **array, int x, int y){
    for(int i = 0; i < x; i++){
        if(array[0][i] != 0 || array[y-1][i] != 0) return true;
    }
    for(int i=0; i < y; i++){
        if(array[i][0] != 0 || array[i][x-1] != 0) return true;
    }
    return false;
}

void set(int **array, int x, int y){
    for(int i = 0; i < x; i++){
        array[0][i] = 0;
        array[y-1][i] = 0;
    }
    for(int i=0; i < y; i++){
        array[i][0] = 0;
        array[i][x-1] = 0;
    }
}

int main() {
    int x = 5;
    int y = 6;
    int **array = new int*[y];
    for(int j = 0; j < y; j++)
        array[j] = new int[x];

    for(int j = 0; j < y; j++)
        for (int i = 0; i < x; i++)
            array[j][i] = j*10+i;

    set(array, x, y);

    for(int j = 0; j < y; j++){
        for (int i = 0; i < x; i++)
            cout<<array[j][i]<<" ";
        cout<<endl;
    }

    cout<<fun(array, x, y);


    for(int j = 0; j < y; j++)
        delete[] array[j];
    delete[] array;
    return 0;
}
