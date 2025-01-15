#include <iostream>


using namespace std;

struct Point{
    float x;
    float y;
};

void copy(Point *source, Point destination[], int n){
    for(int i=0;i<n;i++)
        destination[i]=source[i];
}

int main(){
    Point points1[3]={Point{2,2}, Point{1,2}, Point{2,1}};
    Point points2[3];
    copy(points1, points2, 3);
    for(int i=0;i<3;i++)
        cout<<points2[i].x<<"   "<<points2[i].y<<endl;
    return 0;
}
