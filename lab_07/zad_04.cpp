#include <iostream>

using namespace std;

int binToInt(char bin[], int index)
{
    if(index == -1)
        return 0;
    else
    {
        return binToInt(bin, index-1)*10+(bin[index]-'0')%10;
    }
}

int main()
{
    char bin[] = "10010011";
    //int size = sizeof(bin)-1;
    cout << binToInt(bin, 8);
    return 0;
}
