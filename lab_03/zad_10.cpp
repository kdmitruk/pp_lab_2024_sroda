#include <iostream>

using namespace std;
int main()
{
    int n=10;
    for(int y = 0; y < n; y++){
        int space_count=n-y-1;
       for(int x = 0; x < space_count; x++)
            printf(" ");
        int star_count= y*2+1;
        for(int x = 0; x<star_count; x++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
