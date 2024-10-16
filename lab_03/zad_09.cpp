#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

/*int main()
{
    for(int y = 0; y <= 10; y++){
        for(int x = 0; x <=y; x++){
            printf("%4d", x*y);
        }
        printf("\n");
    }

    return 0;
}
*/
int main()
{
    for(int y = 0; y <= 10; y++){
        for(int x = 0; x < y; x++) //spacje
            printf("    ");
        for(int x = y; x <= 10; x++){ //dane
            printf("%4d", x*y);
        }
        printf("\n");
    }

    return 0;
}
