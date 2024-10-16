#include <iostream>
using namespace std;
enum Weekdays{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
//               0       1        2          3         4       5         6
int main()
{
    int day, month, year;
    //scanf("%d.%d.%d",&day, &month, &year);
    day=21;
    month=1;
    year=1991;

    int k = year%100;
    int j = year/100;
    int d = (day + (13*(month+1))/5 + k +k/4 + j/4 +5*j) % 7;

    switch (d){
    case Monday: cout<<"Poniedzialek"; break;
    case Tuesday: cout<<"Wtorek"; break;
    case Wednesday: cout<<"Sroda"; break;
    case Thursday: cout<<"Czwartek"; break;
    case Friday: cout<<"Piatek"; break;
    case Saturday: cout<<"Sobota"; break;
    case Sunday: cout<<"Niedziela"; break;
    }
    return 0;
}
