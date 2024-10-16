#include <iostream>

using namespace std;

int main()
{
    int n=0,m=1;
    int temp;
    for (int i = 0 ; i < 50 ; i++)
    {
        cout << n << " ";
        temp = n + m;
        n = m;
        m = temp;
    }
}
