#include <iostream>
bool isPowerOfTwo(unsigned int x)
{
    return !(x & (x-1));
}

int main() {
    int x = 1024;
    std::cout << isPowerOfTwo(x) << std::endl;
}
