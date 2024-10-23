#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    const int size = 5;
    int tabl[size];
    for(int i = 0; i<size; i++){
        //tabl[i]=rand()%10;
        tabl[i]=10.*rand()/RAND_MAX;
    }
    for(int i = 0; i<size; i++){
        cout << tabl[i] << "\n";
    }
    return 0;
}
