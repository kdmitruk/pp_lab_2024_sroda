#include <iostream>

using namespace std;

int main() {
    int size = 10;
    int *arr = (int *)malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++) {
        arr[i] = i;
        cout<< arr[i] << " ";
    }
    int nsize = 20;
    arr = (int *)realloc(arr, sizeof(int) * nsize);

    cout << endl;
    for (int i = 0; i < nsize; i++)
    {
        cout<< arr[i] << " ";
    }

    free(arr);

    return 0;
}
/*
int main() {

    int size = 10;

    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
        cout<< arr[i] << " ";
    }

    int nsize = 20;
    {
        int *temp = new int[nsize];
        for (int i=0; i < size; i++) temp[i] = arr[i];
        delete[] arr;
        arr = temp;
    }
    cout << endl;
    for (int i = 0; i < nsize; i++)
    {
        cout<< arr[i] << " ";
    }

    delete[] arr;

    return 0;
}
*/
