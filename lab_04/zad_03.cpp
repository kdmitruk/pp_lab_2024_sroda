#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    const int size = 10;
    int arr[size];
    for(int i = 0; i<size; i++){
        arr[i]=rand()%10;
      cout << arr[i] << " ";
    }
    const int half_size = size / 2;
    for(int i = 0; i<half_size; i++)
    {
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    cout<<endl;
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}
