#include <iostream>
using namespace std;

int* fun(int *wsk1, int *wsk2)
{
    if(*wsk1<=*wsk2 )
    {
        return wsk1;
    }
    else
        return wsk2;
}

int main() {
    int a = 1;
    int b = 2;
    cout<<*(fun(&a, &b));
    return 0;
}
