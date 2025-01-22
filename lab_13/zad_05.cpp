#include <iostream>
#include <cmath>
#include <climits>
using namespace std;


struct Point
{
    float x;
    float y;
};

Point rand_point(float min, float max)
{
    auto rand_coord = [min, max](){return ((float)rand() / (float)RAND_MAX) * (max-min) + min;};
    return Point {rand_coord(), rand_coord()};
}

int pointsInCircle(Point center, float r, Point arr[], const int n, Point*** result)
{
    int counter = 0;
    Point** temp = new Point*[n];
    for(int i = 0; i<n; i++)
    {
        if(pow(arr[i].x - center.x, 2) + pow(arr[i].y - center.y, 2) <= pow(r, 2))
        {
            temp[counter] = &arr[i];
            counter++;
        }
    }
    Point** result_inside = new Point*[counter];
    std::copy(temp,temp + counter, result_inside);
    delete[] temp;
    *result = result_inside;
    return counter;
}

int main()
{
    const int n = 1000000;
    Point center = {0,0};
    Point arr[n];
    for(int i =0; i<n;i++)
    {
        arr[i] = rand_point(-1,1);
    }
    // for(int i =0; i<n;i++)
    // {
    //     cout << arr[i].x << " " << arr[i].y << "     ";
    // }
    cout<<endl;
    int r = 1;
    Point** result;
    int n_result = pointsInCircle(center, r, arr, n, &result);
    cout << n_result;
    cout<<endl;
    // for(int  i = 0; i<n_result; i++)
    // {
    //     cout << (*result[i]).x << " " << result[i]->y << "     ";
    // }
    // cout<<endl;

    cout<<"pi = "<< 4.f * n_result / n;
    return 0;
}
