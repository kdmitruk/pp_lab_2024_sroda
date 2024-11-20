#include <iostream>
#include <cstring>

#define SIZE 100

using namespace std;

int convert(char text[]) {
    char temp[SIZE];
    int j=0;
    int counter = 0;
    for(int i=0; text[i] != '\0'; ++i) {
        if(text[i] == 'h') {
            temp[j++] = 'c';
            temp[j++] = 'h';
            counter++;
        }
        else if(text[i] == 'c' && text[i+1] == 'h') {
            temp[j++] = 'h';
            i++;
            counter--;
        }
        else if(text[i] == 'C' && text[i+1] == 'h') {
            temp[j++] = 'C';
            temp[j++] = 'h';
            i++;
        }
        else {
            temp[j++] = text[i];
        }
    }
    temp[j] = '\0';

    for(j=0; temp[j] != '\0'; ++j)
        text[j] = temp[j];
    text[j] = '\0';
    return counter;
}

int main() {
    char text[SIZE] = "Chamski hultaj chodzi szlakiem,\nhardo wymachuje hakiem.";
    int diff = convert(text);
    cout << (diff > 0 ? "+" : "") << diff << endl;
    cout << text;
}
