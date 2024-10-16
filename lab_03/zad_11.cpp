#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            char s = i%2==0 ? (j%2==0 ? '#' : '0') : (j%2==0 ? '0' : '#');
            cout << s;
        }
        cout << endl;
    }

    return 0;
}
