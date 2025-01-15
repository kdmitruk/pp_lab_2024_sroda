#include <iostream>
#include <cmath>

using namespace std;

struct Point{
    float x;
    float y;
};

float distance(Point a, Point b)
{
    return hypot(a.x-b.x, a.y-b.y);
}

float minDist(Point points[], size_t size, Point &p1Min, Point &p2Min)
{
    float minDistance = distance(points[0], points[1]);
    for (int i=0; i<size; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            float tempDistance = distance(points[i], points[j]);
            if(tempDistance<=minDistance)
            {
                minDistance = tempDistance;
                p1Min = points[i];
                p2Min = points[j];
            }
        }
    }
    return minDistance;
}

int main(){
    Point points[4]={Point{2,2}, Point{1,2}, Point{0,1}, Point{0,0}};
    Point p1;
    Point p2;
    cout << minDist(points, 4, p1, p2) << endl;
    cout << p1.x << " " << p1.y << " " << p2.x << " " << p2.y << endl;

    return 0;
}
