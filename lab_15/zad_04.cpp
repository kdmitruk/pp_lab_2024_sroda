#include <iostream>
#include <cstdio>

using namespace std;

int fun(const char path[])
{
    FILE *file = fopen(path, "r+");
    if(!file){
        cout<<"BLAD!!!"<<endl;
        return 1;
    }
    int counter=0;
    int current;
    while(fscanf(file, "%d", &current) == 1){
        counter++;
    }

    int *array=new int[counter];
    rewind(file);
    for(int i=0; fscanf(file, "%d", &current) ==1; i++){
        array[i]=current+1;
        cout << array[i];
    }
    rewind(file);
    for(int i=0;  i<counter; i++){
        cout << fprintf(file, "%d ", array[i]) << " ";
    }
    cout << endl;
    fclose(file);
    delete[] array;
    return 0;
}

int main(){
    return fun("file4.txt");

}
