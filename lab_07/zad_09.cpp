#include <iostream>
using namespace  std;
void print_bin(int x){
    unsigned int index = 1<<10;

    bool print = true;
    while(index != 0){
        int digit =(x & index)!=0 ? 1:0;
        if(!print){
            if (digit==1)
                print = true;
        }
        if(print)
            cout <<((x & index)!=0 ? 1:0);

        index >>= 1;
    }
    cout << endl;
}

int main() {
    int a = 128, b = 63;
    print_bin(a);
    print_bin(b);

    a ^= b;
    print_bin(a);

    b ^= a;
    print_bin(b);

    a ^= b;
    print_bin(a);

    std::cout << "a = " << a << "\tb = " << b << std::endl;
    return 0;
}
