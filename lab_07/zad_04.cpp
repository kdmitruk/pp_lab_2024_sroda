#include <iostream>
#include <cmath>

using namespace std;

int binToInt(char bin[], int index, int size) {
    if(index == size)
        return bin[index] - '0';

    int rest = binToInt(bin, index + 1, size);
    int digit = bin[index] - '0';

    return digit * pow(2, size - index) + rest;
}

int main() {
    char bin[] = "1101001";
    int size = sizeof(bin) / sizeof(bin[0]) - 2;
    cout << binToInt(bin, 0, size) << endl;
    return 0;
}
