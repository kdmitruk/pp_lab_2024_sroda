#include <iostream>
#include <ctime>
#include <cstdlib>

int mat_add(int a, int b){
    return a + b;
}
int mat_sub(int a, int b){
    return a - b;
}

void mat_operation(int** arr, int** arr2, int n, int(*fun)(int, int)){
    for (int i=0; i<n;i++){
        for (int j=0;j<n;j++){
            *(*(arr+i)+j) = fun(*(*(arr+i)+j),*(*(arr2+i)+j));
            //arr[i][j] = fun(arr[i][j], arr2[i][j]);
        }
    }
}

void print_arr(int** arr, int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            std::cout << *(*(arr+i)+j) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main(){
    srand(time(NULL));
    const int n = 3;
    int** arr = new int*[n];
    int** arr2 = new int*[n];
    for (int i=0;i<n;i++){
        arr[i] = new int[n];
        arr2[i] = new int[n];
    }
    int r;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            r = rand() % 10 + 1;
            *(*(arr+i)+j) = r;
            r = rand() % 10 + 1;
            *(*(arr2+i)+j) = r;
        }
    }
    print_arr(arr, n);
    print_arr(arr2, n);
    mat_operation(arr, arr2, n, mat_add);
    print_arr(arr, n);
    for (int i=0;i<n;i++){
        delete [] arr[i];
        delete [] arr2[i];
    }
    delete [] arr;
    delete [] arr2;
    return 0;
}
