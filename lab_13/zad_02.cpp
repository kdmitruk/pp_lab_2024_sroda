#include <iostream>
#include <ctime>
#include <cstdlib>

struct Point
{
    float x;
    float y;
};



int main(){
    Point p1;


    Point *p2 = new Point;
    delete p2;


    Point arr3[5];


    Point *arr4[5];
    for(int i = 0; i<5; i++)
        arr4[i] = new Point;

    for(int i = 0; i<5; i++)
         delete arr4[i];


    Point* arr5 =new Point[5];
    delete[] arr5;


     Point** arr6 =new Point*[5];
    for(int i = 0; i<5; i++)
        arr6[i] = new Point;


    for(int i = 0; i<5; i++)
        delete[] arr6[i];
    delete[] arr6;
    return 0;
}
