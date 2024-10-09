#include <iostream>

using namespace std;

int main()
{
    double a1,a2,b1,b2;
    a1=3;
    a2=4;
    b1=1;
    b2=2;
    bool condition1 = b1<=a2;
    bool condition2 = b2>=a1;
    if(condition1 && condition2)
    {
        cout<< "intersection"<<endl;
    }
    else
    {
        cout<< "no intersection"<<endl;

    }

    return 0;
}
