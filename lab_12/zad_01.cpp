#include <iostream>
#include <algorithm>
using namespace std;

void fun(const int* arr, const int size,int* result, const int k)
{
    int* temp = new int[size];
    std::copy(arr, arr+size, temp);
    //std::sort(temp, temp+size, [](int a, int b){return a>b;});
   // std::copy(temp, temp + k, result);
    std::sort(temp, temp+size);
    std::copy(temp + size-k, temp + size, result);
    delete[] temp;
}

int main()
{
    const int size = 5;
    const int arr[size] = {44,5,66,7,8};
    const int k = 3;
    int result[k];
    fun(arr, size, result,k);
    for(int i = 0; i < k; i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}
