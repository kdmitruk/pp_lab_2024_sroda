#include <iostream>
#include<cstdlib>
#include<algorithm>

using namespace std;

int compar1(const void *v1, const void *v2){
    char *a=(char *)v1;
    char *b=(char *)v2;
    for(int i=0;;i++){
        char c=*(a+i), d=*(b+i);
        if(c=='\0' && d == '\0') return 0;
        if(c=='\0') return 1;
        if(d=='\0') return -1;
        if(std::tolower(c)>std::tolower(d)) return -1;
        if(std::tolower(c)<std::tolower(d)) return 1;
    }
}
bool compar2(char *a, char *b){
    for(int i=0;;i++){
        char c=*(a+i), d=*(b+i);
        if(c=='\0' && d == '\0') return false;
        if(c=='\0') return true;
        if(d=='\0') return false;
        if(std::tolower(c)>std::tolower(d)) return false;
        if(std::tolower(c)<std::tolower(d)) return true;
    }
}
int main(){
    int length = 4;

    char array[][100] = {
        "jakis napis",
        "jakis inny napis",
        "jeszcze ze dwa",
        "ostatni"
    };

    char *array_ptr[length];
    for(int i=0; i<length; i++)
        array_ptr[i] = (char *)array+i*100;

    //qsort(array, length, 100, compar1);
    //for_each(array, array+length, [](char array [100]) {cout << array << endl;});

    sort(array_ptr, array_ptr+length, compar2);
    for_each(array_ptr, array_ptr+length, [](char *array) {cout << array << endl;});

    return 0;
}
