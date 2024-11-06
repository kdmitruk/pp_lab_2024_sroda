#include <iostream>
using namespace std;
int bit_set_1(int x, int index){
    int mask = 1 << index;

    return (x | mask);
}

int bit_set_0(int x, int index){
    int mask = 1 << index;

    return (x & ~mask);
}
int bit_reverse(int x, int index){
    int mask = 1 << index;

    return (x & mask ) ? bit_set_0(x, index): bit_set_1(x, index);
}
void print_bin(int x){
    // unsigned int x = 1024;//INT_MAX +1;
    unsigned int index = 1<<31;

    /*while(x>0){

        cout <<(x & index)<<endl;
        x >>= 1;
    }*/
    bool print = false;
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
}



int main()
{
    int x = 1024;
    int index = 2;
    print_bin(bit_reverse(x, index));
    // print_bin(bit_set_1(x, index));
    // cout<<bit_set_0(x, index)<<endl;
    // print_bin(bit_set_0(x, index));
    return 0;
}
