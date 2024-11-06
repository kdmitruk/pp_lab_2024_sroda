#include <iostream>
#include <climits>

using namespace std;


int main()
{
    unsigned int x = 1024;//INT_MAX +1;
    unsigned int index = 1<<31;

    /*while(x>0){

        cout <<(x & index)<<endl;
        x >>= 1;
    }*/
    bool print = false;
    while(index != 0){
        int digit =(x & index)!=0 ? 1:0;
        if(!print){
            if (digit==1)
                print = true;
        }
        if(print)
        cout <<((x & index)!=0 ? 1:0);

        index >>= 1;
    }
    return 0;
}
