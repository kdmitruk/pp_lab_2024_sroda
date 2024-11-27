#include <iostream>
#include <random>

using namespace std;

void gen_arr(float *arr, int size) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(1.0, 2.0);
    for (int i = 0; i < size; ++i)
        arr[i] = dis(gen);
}

void seq(const float* arr, int n){
    cout << 0 << " ";
    int sign = -1;
    float result = 0;
    for(int i = 1; i < n+1; i++){
        result = sign * arr[i - 1] + result;
        sign *= -1;
        cout<<result<< " ";
    }
}

int main() {
    int size = 10;
    float *arr = new float[size];

    gen_arr(arr, size);

    seq(arr, size);
    // for (int i = 0; i < size; i++) {
    //     cout<< arr[i] << " ";
    // }

    delete[] arr;

}
