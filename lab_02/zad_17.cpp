#include <iostream>

using namespace std;

int main()
{
    int rok;
    cin >> rok;
    if (rok%4==0 && (rok%100!=0 || rok%400==0))
    {
        cout << "leap year" << endl;
    }
    else
    {
        cout << "common year" << endl;
    }
    return 0;
}
