#include <iostream>


using namespace std;


int main(){
    if(remove("file2.txt") == 0){
        cout << "removed" << endl;
        return 0;
    }


    return 0;
}
