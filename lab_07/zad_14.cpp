#include <iostream>
using namespace std;

unsigned char fun(unsigned char v, int b, bool f)
{
    if(f)
    {
        v = ~v;
        v = v & 15;//0xf
    }
    unsigned char mask = 1<<b;
    bool bit = v & mask;
    if(!bit)
    {
        v |= mask;
    }
    else
    {
        v &= ~mask;
    }
    return v;
}

int main() {
    unsigned char v = 13;
    int b = 6;
    bool f = true;
    cout<<(unsigned int)fun(v, b, f);
    return 0;
}
