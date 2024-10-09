#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout<<"podaj przyprostokatne\n";
    cin >> a >> b;
    cout<<"podaj przeciwprostokatne\n";
    cin >> c;
   /* if(a + b > c && a + c > b && c + b > a)
    {
        cout<<"to moze byc trojkat\n";
    }
    else
    {
        cout<<"to nie moze byc trojkat\n";
    }*/
    if(a + b <= c || a + c <= b || c + b <= a)
    {
        cout<<"to nie moze byc trojkat\n";
    }
    else
    {
        cout<<"to moze byc trojkat\n";
    }
    return 0;
}
