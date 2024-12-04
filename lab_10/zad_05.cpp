#include <iostream>
#include <random>

using namespace std;



void swapArr2(int **array, int n)
{
    int* temp = array[n-1];
    for (int i = n-1; i>=1; i--)
    {
        array[i] = array[i-1];
    }
    array[0] = temp;
}


void swapArr(int **array, int n)
{
    int* temp = array[0];
    for (int i = 0; i<n-1; i++)
    {
        array[i] = array[i+1];
    }
    array[n-1] = temp;
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

    //swapArr(array, y);
    swapArr2(array, y);

    for(int j = 0; j < y; j++){
        for (int i = 0; i < x; i++)
            cout<<array[j][i]<<" ";
        cout<<endl;
    }



    for(int j = 0; j < y; j++)
        delete[] array[j];
    delete[] array;
    return 0;

}
