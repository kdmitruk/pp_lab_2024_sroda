#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int tab[] = { 12, 15, 13, 16, 11, 18, 14, 36, 5, 1004};
    const int size = 10;
    float srednia = 0;
    for(int i = 0; i < size; i++)
    {
        srednia += tab[i] / size;
    }
    cout<<srednia<<endl;
    int index;
    int min_diff=INT_MAX;
    int diff;
    for(int i = 0; i < size; i++)
    {
        diff=abs(tab[i]-srednia);
        if(diff<min_diff)
        {
            min_diff=diff;
            index = i;
        }
    }
    cout<<index<<endl;
    return 0;
}
