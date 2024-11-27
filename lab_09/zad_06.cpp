#include <iostream>
#include<cstdlib>

void rand_gen(float *arr, int n){
    float tmp=(float)RAND_MAX;
    for(int i=0;i<n;i++)
        arr[i]=rand()/tmp;
}
void printElements(float *arr1, int n1, int *arr2, int n2){

    for(int i=0;i<n2;i++){
        if(arr2[i]>=0 && arr2[i]<n1)
            std::cout<<arr1[arr2[i]]<<' ';
        else
            std::cout<<"NAN"<<' ';
    }
}
int main(){
    int n1=10;
    float *arr1=new float[n1];
    rand_gen(arr1,n1);
    for(int i=0;i<n1;i++)
        std::cout<<arr1[i]<<' ';
    std::cout<<'\n';
    int n2=5;
    int *arr2=new int[n2];
    for(int i=0;i<n2;i++)
        std::cin>>arr2[i];
    printElements(arr1,n1, arr2, n2);
    delete [] arr1;
    delete [] arr2;
    return 0;
}
