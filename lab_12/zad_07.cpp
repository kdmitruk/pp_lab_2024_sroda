#include <iostream>

using namespace std;

void swap(void* a, void* b, int size )
{
    char temp;
    char* ca = (char*)a;
    char* cb = (char*)b;
    for(int i = 0; i<size; i++)
    {
        temp = ca[i];
        ca[i] = cb[i];
        cb[i] = temp;
    }
}

int main() {
    int a[3] { 6,2,4};
    int b[3] {1,7,2};

    swap(&a,&b,sizeof(a));
    for(int i = 0; i<3; i++){
        cout<<a[i]<<' '<<b[i]<<endl;
    }
    return 0;
}

