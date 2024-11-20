#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int x=12;
    int *px=nullptr;
    cout<<px<<endl;
    //cout<<*px<<endl;
    px=&x;
    cout<<px<<endl;
    printf("%p\n", px);
    printf("%d\n", *px);

    cout<<*px<<endl;
    return 0;
}
