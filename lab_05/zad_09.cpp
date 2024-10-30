#include <iostream>
using namespace std;

void swap(float &a, float &b){
    float tmp=a;
    a=b;
    b=tmp;
}
int main() {
    float a=3.2, b=5.4;
    swap(a,b);
    std::cout<<a<<' '<<b<<std::endl;
    return 0;
}
