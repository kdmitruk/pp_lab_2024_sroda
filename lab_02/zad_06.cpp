#include <iostream>

using namespace std;

int main()
{
    double a1,a2,b1,b2;
    a1=2;
    a2=4;
    b1=1;
    b2=3;
    bool condition1 = b1<=a2;
    bool condition2 = b2>=a1;
    if(condition1 && condition2)
    {
        cout << "intersection" << endl;
        if (a1>b1)
        {
            cout << a1 << endl;
        }
        else
        {
            cout << b1 << endl;
        }

        if(a2<b2)
        {
            cout << a2 << endl;
        }
        else
        {
            cout << b2 << endl;
        }
    }
    else
    {
        cout << "no intersection" << endl;

    }

    return 0;
}
