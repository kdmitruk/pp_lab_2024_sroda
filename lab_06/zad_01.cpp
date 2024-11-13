#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <thread>

using namespace std;


void fillTable(int macierz[][5], int rows, int cols)
{
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            macierz[i][j] = rand()%256;
        }
    }
}

void showTable(int macierz[][5], int rows, int cols)
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

void process(int macierz[][5], const int rows, const int cols)
{
    int temp[rows][5];
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            int value = 0;
            int counter = 0;
            for (int y=i-1; y<=i+1; y++)
            {
                if(y<0 || y>=rows)
                    continue;
                for (int x=j-1; x<=j+1; x++)
                {
                    if(x<0 || x>=cols)
                        continue;
                    value += macierz [y][x];
                    counter++;
                }
            }
            value = round(value/counter);
            temp[i][j] = value;
        }
    }
    //showTable(temp, rows, cols);
    memcpy(macierz, temp, sizeof(temp[0][0])*rows*cols);
}

int main()
{
    srand(time(0));
    const int rows = 10;
    const int cols = 5;
    int macierz[rows][cols];
    fillTable(macierz, rows, cols);
    showTable(macierz, rows, cols);
    for (int i=0; i<100; i++)
    {
        cout << endl;
        process(macierz, rows, cols);
        showTable(macierz, rows, cols);
        this_thread::sleep_for(100ms);
    }
    return 0;
}
