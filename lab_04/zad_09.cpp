#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;


int main()
{
    const int n=11;
    int arr[n] = {4, 2, 1, 7, 10, 3, 1, 4, 5, 9, 2};
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] %2 !=0  ){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<' ';
    cout<<endl;

    return 0;
}
