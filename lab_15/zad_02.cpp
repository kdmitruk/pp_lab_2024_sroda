#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    FILE* file = fopen("file2.txt", "w");
    if(!file){
        cout<<"BLAD!!!"<<endl;
        return 1;
    }

    for(int i = 0; i < 10; i++){
        fprintf(file, "%d ", i);
    }

    fclose(file);


    return 0;
}
