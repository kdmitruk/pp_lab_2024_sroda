#include <iostream>
int secondMax (int n, float arr[]){
    int max1, max2;
    if(arr[0]>arr[1]){
        max1=arr[0];
        max2=arr[1];
    }else{
        max1=arr[1];
        max2=arr[0];
    }
    for(int i=2;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }else if(arr[i]>max2){
            max2=arr[i];
        }
    }
    return max2;
}
int main() {
    float arr[]={10, 5, 3, 7, 6, 0, 7, 3, 1, 2, 6, 0, 4, 1, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    std::cout<<std::endl;
    std::cout<<secondMax(n,arr)<<std::endl;
    return 0;
}
