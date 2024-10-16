#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int sum =0;
    while(x != 0)
    {
        sum = sum + x%10;
        x=x/10;

    }

    cout<<abs(sum)<<endl;
}
