#include <iostream>

using namespace std;
int fib(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    return fib(n-1)+fib(n-2);
}
int fib_tail(int n, int a=0, int b=1){
    if(n==0)
        return a;
    else if(n==1)
        return b;
    return fib_tail(n-1, b, a+b);
}
int main()
{
    cout<<fib(10)<<endl;
    cout<<fib_tail(10)<<endl;
    return 0;
}
