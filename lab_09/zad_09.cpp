#include <iostream>

using namespace std;

void fun(int *first, int *last)
{
    for (int *current = first; current <= last; current++)
    {
        cout << *current << "  \t" <<current << endl;
    }
}

int main() {
    int arr[4] = {5, 7, -2, 8};
    //fun(arr, arr+3);
    fun(&arr[0], &arr[3]);
    return 0;
}
