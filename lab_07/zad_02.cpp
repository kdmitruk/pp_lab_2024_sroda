#include <iostream>

using namespace std;

void displayIndexed(float data[], unsigned int indices[], const int dataSize, const int indicesSize) {
    for(int i=0; i<indicesSize; i++) {
        int index = indices[i];
        cout << "[" << index << "]=";
        if(index >= 0 && index < dataSize)
            cout << data[index];
        else
            cout << "NAN";
        cout << " ";
    }
}

int main()
{
    const int size1 = 5;
    const int size2 = 5;
    float arr1[size1]= {2.3,3.1,0.5,3.4,5.2};
    unsigned int arr2[size2] ={4,1,3,9,1};

    displayIndexed( arr1,  arr2,  size1, size2);
    return 0;
}
