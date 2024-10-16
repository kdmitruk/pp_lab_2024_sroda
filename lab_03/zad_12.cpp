#include <iostream>

using namespace std;

int main()
{
    int x=10;
    int count=0;
    if (x==0)
        count=1;
    /*else while(x != 0)
    {
        x=x/10;
        count++;
    }*/
    for( ; x != 0;x/=10,count++);
    cout<<count<<endl;
}
