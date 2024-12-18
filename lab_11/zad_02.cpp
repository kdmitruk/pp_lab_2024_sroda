#include <iostream>
#include <algorithm>

// void display(int x)
// {
//     std::cout<<x<<std::endl;
// }

// int main() {
//     const int size = 3;
//     int arr[size]={1,2,3};
//     std::for_each(arr, &arr[size], display);
//     return 0;
// }

int main() {
    const int size = 3;
    int arr[size]={1,2,39};

    // void(*display)(int) = [](int x){
    //     std::cout<<x<<std::endl;
    // };

    // auto display = [](int x){
    //     std::cout<<x<<std::endl;
    // };
    //std::for_each(arr, &arr[size], display);

    std::for_each(arr, &arr[size], [](int x) -> void{
        std::cout<<x<<std::endl;
    });
    return 0;
}

