#include <iostream>
#include <climits>

using namespace std;
int bit_value(int a, int index){
    index = 1 << index;

    return (a & index) ? 1 : 0;
}

int main()
{
    int x = 1023;
    int index = 2;
    cout << bit_value(x, index)<<endl;
    return 0;
}
