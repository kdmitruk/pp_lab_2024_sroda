#include <iostream>

using namespace std;

int main() {
    unsigned int n;
    cin >> n;
    int *arr = new int [n];

    for (int i = 0; i<n; i++)
    {
        arr[i] = i;
        cout<< arr[i] <<endl;
    }

    delete[] arr;
}
