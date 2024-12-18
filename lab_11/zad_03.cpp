#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    const char arr[]= "aBcDeFg";
    char *out = new char[sizeof(arr)];
    int len = sizeof(arr)- 1;
    char *end = copy_if(arr, arr+len,out,[](const char c){
       return 'a'<= c && c<= 'z';
    });
    out[len]= '\0';

    fill(end,out + len,'-');
    cout<<out;
    delete[] out;
    return 0;
}
