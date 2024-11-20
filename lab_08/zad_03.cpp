#include <iostream>

using namespace std;
void fun(int *a, int *b, int *c)
{
    *c = *a + *b;
}

void fun_ref(int &a, int &b, int &c)
{
    c = a + b;
}

int main() {
    int a = 5, b = 2, c;
    fun(&a, &b, &c);
    fun_ref(a, b, c);

    cout << c << endl;
    return 0;
}
