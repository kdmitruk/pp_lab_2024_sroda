#include <iostream>

bool isTrianglePossible(float a, float b, float c){
    return a+b>c && a+c>b && b+c>a;
}
int main() {
    std::cout << isTrianglePossible(3.f,4.f,5.f) << std::endl;
    return 0;
}
