#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, l, ml=INT_MIN;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> l;
        ml = ml<l ? l : ml;
        /*if(ml<l)
        {
            ml=l;
        }*/
    }
    cout << ml << endl;
    return 0;
}
