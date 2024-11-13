#include <iostream>
void interval(int n, float arr[], int a, int b){
    for(int i=0;i<n;i++)
        if(arr[i]<a || arr[i]>b)
            arr[i]=0;
}
int main() {
    const int n=10;
    float arr[n];

    for(int i=0;i<n;i++)
        arr[i]=i*1.7;

    for(int i=0;i<n;i++)
        std::cout<<arr[i]<<' ';
    std::cout<<std::endl;

    interval(n,arr,4,10);

    for(int i=0;i<n;i++)
        std::cout<<arr[i]<<' ';
    std::cout<<std::endl;

    return 0;
}
