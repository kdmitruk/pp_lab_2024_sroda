#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    int suma = 0;
    for(int i = 0; i < n; i++){
        cin >> m;
        suma = suma + m;
    }

    cout << (float)suma/n << endl;
    return 0;
}
