#include <cfloat>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int odbiornik(int n, float x[], float y[], float z[], float r, float ox, float oy){
    float min_distance = FLT_MAX;
    int result = -1;
    for(int i = 0; i<n;i++){
        float distance = sqrt(pow(x[i] - ox, 2) + pow(y[i] - oy, 2) + pow(z[i], 2));
        if(distance <= r && distance < min_distance){
            min_distance = distance;
            result = i;
        }
    }
    return result;
}

int main()
{
    int n=6;
    float x[]={2,2,3,5,6,8};
    float y[]={2,6,3,7,1,6};
    float z[]={2,1,1.5,2,2,2};
    float r=2.5;
    float ox=7;
    float oy=2;

    cout<<odbiornik(n, x, y, z, r, ox, oy)<<endl;

    return 0;
}
