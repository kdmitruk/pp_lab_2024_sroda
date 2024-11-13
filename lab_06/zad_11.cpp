#include <iostream>

using namespace std;

u_int64_t factorial(u_int32_t value)
{
    u_int64_t result = 1;
    for(int i = 2;i<=value;i++)
    {
        result*=i;

    }
    return result;
}
u_int64_t factorial_rec(u_int64_t value)
{
    if(value==1)
    {
        return 1;
    }
  return factorial_rec(value-1)*value;
}
int main()
{

    cout<<factorial_rec(50)<<endl;
    return 0;
}
