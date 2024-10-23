#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    const int size1 = 5;
    const int size2 = 7;
    const int size_sum = size1 + size2;
    int arr1[size1];
    int arr2[size2];
    int arr_concat[size_sum];

    for(int i = 0; i<size1; i++){
        arr1[i]=rand()%10;
        cout << arr1[i] << " " ;
    }
    cout << endl;
    for(int i = 0; i<size2; i++){
        arr2[i]=rand()%10;
        cout << arr2[i] << " " ;
    }
    cout << endl;
    for(int i = 0; i<size1; i++){
        arr_concat[i] = arr1[i];
    }
    for(int i = 0; i<size2; i++){
        arr_concat[i+size1] = arr2[i];
    }
    for(int i = 0; i<size_sum; i++){
        cout << arr_concat[i] << " ";
    }

    return 0;
}
