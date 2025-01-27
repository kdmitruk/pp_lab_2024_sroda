#include <iostream>
#include <cstdio>

using namespace std;

struct Matrix{
    int rows;
    int cols;
    int **data;
};

Matrix createMatrix(int rows, int cols, const int data[]){
    Matrix result;
    result.rows = rows;
    result.cols = cols;
    result.data = new int*[rows];
    int dataIndex = 0;
    for(int y = 0; y < rows; y++){
        result.data[y] = new int[cols];
        for(int x = 0; x < cols; x++){
            result.data[y][x] = data[dataIndex++];
        }
    }
    return result;
}

void showMatrix(const Matrix& matrix){
    for(int y = 0; y < matrix.rows; y++){
        for(int x = 0; x < matrix.cols; x++){
            cout<<matrix.data[y][x]<< " ";
        }
        cout<<endl;
    }
}
void writeMatrix(const Matrix &matrix, const char* path){
    FILE* file = fopen(path, "wb");
    fwrite(&matrix.rows, sizeof(int), 1, file);
    fwrite(&matrix.cols, sizeof(int), 1, file);
    for(int y = 0; y < matrix.rows; y++){
        fwrite(matrix.data[y], sizeof(int), matrix.cols, file);
    }
    fclose(file);
}
Matrix readMatrix(const char* path){
    // Matrix matrix;
    int rows;
    int cols;
    FILE* file = fopen(path, "rb");
    fread(&rows, sizeof(int), 1, file);
    fread(&cols, sizeof(int), 1, file);
    int *data = new int[rows*cols];
    fread(data, sizeof(int), (rows*cols), file);
    Matrix result = createMatrix(rows, cols, data);
    delete[] data;
    fclose(file);
    return result;
}
void freeMatrix(const Matrix &matrix){
    for(int  y = 0; y < matrix.rows; y++){
        delete[] matrix.data[y];
    }
    delete[] matrix.data;
}


int main() {
    // const int data[] = {2,4,6,10,25,65};
    // Matrix matrix = createMatrix(2,3, data);
    // showMatrix(matrix);
    // writeMatrix(matrix,"file7.bin");
    Matrix matrix = readMatrix("file7.bin");
    showMatrix(matrix);
    freeMatrix(matrix);
    return 0;
}

