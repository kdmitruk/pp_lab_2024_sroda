#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    const int n=5;
    int arr[n];
    srand(time(0));
    for(int i=0;i<n;i++)
        arr[i]=rand()%10+1;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<' ';
    cout<<endl;

    int max=arr[0];
    int index=0;

    for(int i=1;i<n;i++)
        if(arr[i]>max){
            max=arr[i];
            index=i;
        }

    cout<<index<<endl;

    return 0;
}
