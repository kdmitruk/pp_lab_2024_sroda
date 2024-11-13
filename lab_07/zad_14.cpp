#include <iostream>
void zerosToEnd(int n, float arr[]){
    for(int i=0;i<n;i++){
        bool swap=false;
        for(int j=1;j<n-i;j++)
            if(!arr[j-1]){
                swap=true;
                int tmp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=tmp;
            }
        if(swap==false){
            break;
        }
    }
}
int main() {
    float arr[]={0, 5, 3, 7, 6, 0, 0, 3, 1, 2, 6, 0, 4, 1, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    std::cout<<std::endl;
    zerosToEnd(n,arr);
    for(int i=0;i<n;i++)
        std::cout<<arr[i]<<' ';
    std::cout<<std::endl;
    return 0;
}
