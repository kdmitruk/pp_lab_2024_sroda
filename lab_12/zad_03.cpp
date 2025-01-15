#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool condition(int x){
    string xs=to_string(x);
    int size=xs.length();
    for(int i=0;i<size;i++){
        char d=xs[i];
        if(count_if(xs.begin(),xs.end(),[d](char c){return c==d;})>1)
            return true;
    }
    return false;
}

bool condition2(int x){
    return x%2 == 0;
}
void action (int &x){
    string xs=to_string(x);
    reverse(xs.begin(), xs.end());
    x=stoi(xs);

}
void modify_array(int arr[], int n, bool (*c)(int), void (*a) (int &)){
    for(int i=0;i<n;i++)
        if(c(arr[i]))
            a(arr[i]);
}
int main(){
    int arr[10]={123,1233,1221,11233,456,12346,1001,100001,101,99001};
    modify_array(arr,10,condition2,action);
    for_each(arr,arr+10, [](int n){cout<<n<<' ';});
    return 0;
}
