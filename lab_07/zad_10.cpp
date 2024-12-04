#include <iostream>

using namespace std;

char tolower(char c)
{
    if(c >='A' && c<='Z')
        return c + ('a'-'A');
    else
        return c;
}

void fun(char text[], int arr[])
{
    int counter[128] = {};

    for(int i = 0; text[i]!='\0';i++)
      counter[tolower(text[i])]+=1;

    // for(int i = 0; i<128;i++)
    //     cout<<(char)i<< ' '<<counter[i]<<endl;

    for(int i = 0; text[i]!='\0';i++)
        arr[i] = counter[tolower(text[i])];
}

int main() {
    char text[]= "Ala ma kota";
    int arr[12];

    fun(text, arr);
    for(int i = 0; i<11;i++)
        cout<<arr[i]<<" ";
    return 0;
}
