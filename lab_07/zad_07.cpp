#include <iostream>

using namespace std;
int bin_str_to_int(char bin[]){
    int result=0;
    for(int i = 0; bin[i] != '\0'; i++)
    {
        result<<=1;
        result += bin[i]-'0';
    }
    return result;
}
int main(){

    char bin[] = "10000000";
    cout<<bin_str_to_int(bin);

    return 0;
}
