#include <iostream>

using namespace std;

int stringToInt(char napis[]);

int main()
{
    char napis[] = "12312";
    cout << stringToInt(napis);
    return 0;
}

int stringToInt(char napis[]){
    int wynik = 0;
    for(int i = 0; napis[i] != '\0';i++)
    {
        wynik *= 10;
        wynik += napis[i] - '0';

    }
    return wynik;
}
