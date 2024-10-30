#include <iostream>
#include <cmath>

int powersOf2(int n){
    return pow(2,n);
}

int main() {
    std::cout<<powersOf2(10)<<std::endl;
    return 0;
}
