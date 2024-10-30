#include <iostream>

using namespace std;
int zwr(int k){
    int pow2=1, exp=0;
    for(;pow2<k; exp++){
   //     pow2*=2;
        pow2<<=1;
    }
    return exp-1;
}
int main() {

    int k=1025;
    cout<<zwr(k)<<endl;
    return 0;
}
