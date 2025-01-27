#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const char *filename = "/home/kadmi/dydaktyka/pp_lab_2024_sroda/lab_15/zad_08.cpp";

    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error opening file.\n");
        return 1;
    }
    int line_count = 0;
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), file)) {
        line_count++;
    }

    if(line_count>0){
        rewind(file);
        char **lines =new char*[line_count];
        for(int j=0;j<line_count;j++)
            lines[j] = new char[256];

        int i=0;
        while (fgets(buffer, sizeof(buffer), file)) {
            strcpy(lines[i++],buffer);
        }
        for(int j=0;j<i;j++)
            cout<<lines[j];

        for(int j=0;j<line_count;j++)
            delete [] lines[j];
        delete [] lines;
    }
    fclose(file);

    return 0;
}
