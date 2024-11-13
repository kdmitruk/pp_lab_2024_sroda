#include <iostream>
#include <iomanip>

using namespace std;

void showTable(int macierz[][3], int rows, int cols)
{
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            cout << setw(4) << macierz[i][j];
        }
        cout << endl;
    }
}
void dyadic(int arr1[], int arr2[], int tab[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            tab[i*n+j]= arr1[i]*arr2[j];
        }
    }
}
int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {10, 20, 30};
    int tab[3][3];
    dyadic(arr1, arr2, (int*)tab, 3);
    showTable(tab, 3, 3);
    return 0;
}
