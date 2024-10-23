#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    const int n=5;
    float arr1[n];
    float arr2[n];
    srand(time(0));
    for(int i=0;i<n;i++){
        arr1[i]=rand()%100/100.;
        arr2[i]=rand()%100/100.;
    }
    for(int i=0;i<n;i++)
        cout<<arr1[i]<<' ';
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<arr2[i]<<' ';
    cout<<endl;
    float prod=0;
    for(int i=0;i<n;i++)
        prod +=arr1[i]*arr2[i];
    cout<<prod<<endl;


    return 0;
}
