#include <iostream>
using namespace std;
void print2d(int *arr, int y, int x) {
    for(int i = 0; i < y; ++i) {
        for(int j = 0; j < x; ++j)
            cout << arr[i * x + j] << " ";
        cout << "\n";
    }
}

int main() {
    int arr[10][5];
    for(int i = 0; i < 10; ++i)
        for(int j = 0; j < 5; ++j)
            arr[i][j] = i*10 + j;
    print2d(reinterpret_cast<int *>(arr), 10, 5);
    return 0;
}
