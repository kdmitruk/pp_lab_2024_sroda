#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
void writeArray(const char *path, int array[], int size){
    FILE* file = fopen(path, "wb");
    fwrite(array, sizeof(int), size, file);
    fclose(file);
}
void readArray(const char *path, int array[], int &size){
     FILE* file = fopen(path, "rb");
    size=fread(array, sizeof(int), size, file);
    fclose(file);
}
int main(){
    //const int n=5;
    //int arr[n]={2,4,3,12,17};
    //writeArray("file5.bin",arr,n);
    int array[100];
    int size=100;
    readArray("file5.bin",array,size);
    for(int i=0; i<size; i++)
        cout<<array[i]<<endl;

    return 0;
}
