#include <iostream>
#include<cstdlib>
#include <algorithm>

int main() {
    int n,m;
    std::cin>>n>>m;
    int *arr=new int[n];

    for(int i=0;i<n;i++)
        arr[i]=rand()%101-50;

    std::sort(arr, arr+n);

    for(int i=0;i<n;i++)
        std::cout<<arr[i]<<" ";


    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(arr[j] + arr[i]==m){
                std::cout<<arr[i] <<' '<< arr[j] << std::endl;

            }
        }
    }

    delete [] arr;

    return 0;
}
