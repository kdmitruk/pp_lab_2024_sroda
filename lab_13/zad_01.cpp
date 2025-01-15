#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    float x;
    float y;
};

Point createPoint()
{
    Point result;
    float x, y;
    cin >> x;
    cin >> y;
    result.x = x;
    result.y = y;
    return result;
}

Point createPoint2()
{
    float x, y;
    cin >> x;
    cin >> y;
    return Point{x,y};
}
Point createPoint3()
{
    Point point;
    cin >> point.x >> point.y;
    return point;
}

float distance(Point a, Point b)
{
    return hypot(a.x-b.x, a.y-b.y);
}


int main()
{
    Point p1 = createPoint2();
    Point p2 = createPoint2();
    cout << distance(p1,p2);

}
