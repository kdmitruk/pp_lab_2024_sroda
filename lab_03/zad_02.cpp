#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "podaj liczbe calkowita" << endl;
    cin >> x;
    if(x>0){
        for(int i=0; i <= x; i++){
            cout << i << " ";
        }
    }
    if(x<0){
        for(int i=x; i <= 0; i++){
            cout << i << " ";
        }
    }
    return 0;
}
