#include <iostream>
#define uchar unsigned char


using namespace std;

void zad6(uint word, uchar *b0, uchar *b1, uchar *b2, uchar *b3)
{
    uint *pWord = &word;
    uchar *pWordAsChar = (uchar *) pWord;
    *b0 = pWordAsChar[0];
    *b1 = pWordAsChar[1];
    *b2 = pWordAsChar[2];
    *b3 = pWordAsChar[3];
}

int main() {
    uint word = 0xffffff;
    uchar b0;
    uchar b1;
    uchar b2;
    uchar b3;
    zad6(word, &b0, &b1, &b2, &b3);
    cout << (int)b0 << " " << (int)b1 << " " << (int)b2 << " " << (int)b3 << endl;
    return 0;
}
