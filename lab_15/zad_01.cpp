#include <iostream>
#include <cstdio>

using namespace std;




//int main ()
// {
//     FILE* file = fopen("file.txt", "r");
//     if(!file){
//         cout<<"BLAD!!!"<<endl;
//         return 1;
//     }
//     int current;
//     int min;
//     fscanf(file, "%d", &min);
//     while(fscanf(file, "%d", &current) == 1){

//     }
//     cout<<min<<" "<<current;


//     fclose(file);
//     return 0;
// }

int main(){
    FILE* file = fopen("file.txt", "r");
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
        array[i]=current;
    }
    cout<<array[0]<<endl;
    cout<<array[counter-1]<<endl;
    delete[] array;
    fclose(file);
    return 0;
}
