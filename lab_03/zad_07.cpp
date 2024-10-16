#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
    for(int y = 0; y <= 10; y++){
        for(int x = 0; x <=10; x++){
            //printf("%4d", x*y);
            cout << setw(4) << x*y;
        }
        //printf("\n");
        cout << endl;
    }

    return 0;
}
