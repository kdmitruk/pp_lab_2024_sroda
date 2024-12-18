#include <iostream>
using namespace std;

float sum(float x, float y){
    return x+y;
}
float sub(float x, float y){
    return x-y;
}
float mul(float x, float y){
    return x*y;
}
float div(float x, float y){
    return x/y;
}

int main() {
    float x;
    float y;
    unsigned int z;
    cin>>x>>y>>z;
    //float (*fun)(float, float);
    //fun = sum;
    float (*fun[4])(float, float)= {sum, sub, mul, div};

    cout<<fun[z](x,y);
    return 0;
}
